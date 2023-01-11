#include <iostream>
#include <string>

using namespace std;

bool es_palindromo(const string &palabra)
{
    bool ok = false;
    if (palabra.size() > 0)
    {
        unsigned i = 0;
        unsigned j = palabra.size() - 1;
        while ((i < j) && (palabra[i] == palabra[j]))
        {
            ++i;
            --j;
        }
        ok = i >= j;
    }
    return ok;
}
