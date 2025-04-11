#include <iostream>

using namespace std;

template <typename Tipo>
bool capturaSegura(Tipo &n)
{
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return false;
    }
    return true;
}
