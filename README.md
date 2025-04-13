# Generación de r-combinaciones en orden lexicográfico


# 📚 Generador de r-Combinaciones en Orden Lexicográfico

Este proyecto en C++ genera todas las r-combinaciones posibles de un conjunto {1, 2, ..., n} en orden lexicográfico, validando correctamente la entrada del usuario. Las combinaciones se guardan en un archivo CSV, y se verifica que la cantidad generada coincida con el valor teórico C(n, r) calculado con el coeficiente binomial.

---

## ✍️ Autor
- **Nombre:** José Rodrigo Espinoza García

---

## 💻 Requisitos del sistema
- Compilador C++: `g++` versión 9.0 o superior (compatible con Windows y Linux).
- Memoria RAM: Mínimo 2GB (recomendado 4GB+ para combinaciones grandes).
- Sistema operativo: Windows 10/11 o Linux.

---

## ⚙️ Instrucciones de Compilación y Ejecución

### 🔧 Windows (CMD/PowerShell)
```bash
g++ combinaciones.cpp -o combinaciones -O2 -I .
.\combinaciones.exe
```

### 🐧 Linux (Terminal)
```bash
sudo apt update && sudo apt install g++
g++ combinaciones.cpp -o combinaciones -O2 -I .
./combinaciones
```

---

## 📐 Explicación del Algoritmo

El programa genera todas las combinaciones posibles de `r` elementos a partir de un conjunto de `n` elementos (`0` a `n-1`). 
Y se asegura de que cada combinación:
- Sea única.
- Esté en **orden lexicográfico**.
- Cumpla con los criterios dados (`r ≤ n`, `r ≥ 0`, `n ≥ 1`).

---

## 🔤 ¿Qué es el orden lexicográfico?

El orden lexicográfico es similar al orden del diccionario:
- La combinación `[1, 2, 3]` aparece antes que `[1, 3, 4]`.
- Siempre se empieza desde el número más bajo posible y se avanza de izquierda a derecha.

Nuestro algoritmo asegura este orden generando las combinaciones desde la izquierda hacia la derecha, siempre aumentando progresivamente los valores disponibles para cada posición.

---

## ✅ Validación de Entrada

Antes de ejecutar el algoritmo, el programa valida que:
- `n ≥ 1`
- `r ≥ 0`
- `r ≤ n`

Si alguna condición no se cumple, el programa vuelve a pedir los datos necesarios.

---

## 📁 Formato de salida

El programa genera un archivo CSV con el nombre que el usuario prefiera con el siguiente formato:

```
Elemento1,Elemento2,...,ElementoR
1,2,3
1,3,4
...
```

Cada fila representa una combinación única de `r` elementos del conjunto `{1, 2,..., n}`.

---

## 🔍 Verificación de C(n, r)

Durante la generación de todas las combinaciones se cuenta cada uno generado y al final de la ejecución, el programa muestra cuántas combinaciones se generaron y verifica que el número coincida con la fórmula matemática:

\[
C(n, r) = \frac{n!}{r!(n - r)!}
\]
