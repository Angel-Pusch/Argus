#include <iostream>
#include <string>
using namespace std;
// -- Subalgoritmos ----
bool es_vocal(char c)
{
    return (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u');
}
void plural_1(string &palabra)
{
    if (palabra.size() > 0)
    {
        if (es_vocal(palabra[palabra.size() - 1]))
        {
            palabra += 's';
        }
        else
        {
            if (palabra[palabra.size() - 1] == 'z')
            {
                palabra[palabra.size() - 1] = 'c';
            }
            palabra += "es";
        }
    }
}
void plural_2(string &palabra)
{
    if (palabra.size() > 0)
    {
        if (es_vocal(palabra[palabra.size() - 1]))
        {
            palabra += 's';
        }
        else if (palabra[palabra.size() - 1] == 'z')
        {
            palabra = palabra.substr(0, palabra.size() - 1) + "ces";
        }
        else
        {
            palabra += "es";
        }
    }
}
// -- Principal --------
int main()
{
    string palabra;
    cin >> palabra;
    plural_1(palabra);
    cout << palabra << endl;
}