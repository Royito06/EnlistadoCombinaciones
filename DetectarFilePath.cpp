#include <iostream>
#include <string>

#ifdef _WIN32
    #include <windows.h>
    #include <filesystem>
#elif __linux__
    #include <unistd.h>
    #include <limits.h>
    #include <filesystem>
#endif

std::string obtenerDirectorioEjecutable() {
    char path[PATH_MAX];  // Usamos PATH_MAX para garantizar el tamaño adecuado del buffer

#ifdef _WIN32
    DWORD len = GetModuleFileNameA(NULL, path, sizeof(path));
    if (len == 0) return "";
    std::filesystem::path exePath(path);
    return exePath.parent_path().string();  // Solo la carpeta
#elif __linux__
    ssize_t count = readlink("/proc/self/exe", path, sizeof(path));
    if (count == -1) return "";
    std::filesystem::path exePath(std::string(path, count));  // Aseguramos que se corte correctamente
    return exePath.parent_path().string();  // Solo la carpeta
#else
    return "";
#endif
}
