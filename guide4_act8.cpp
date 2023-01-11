#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{

    string caracteres;
    char letra;
    int n = 0, i = 0, v = 0;
    cout << "Ingresar una cadena de carácteres: ";
    getline(cin, caracteres);

    n = caracteres.size();

    // -- buscar el primer espacio en la cadena --
    while (i < n)
    {
        if (letra == ' ')
        {
            v = 1;
            break;
        }
        if (letra != ' ')
        {
            v = 0;
        }
        letra = caracteres[i];
        i++;
    }

    // -- informar si hay, si la respuesta es sí, proceder --
    if (v == 1)
    {
        cout << "Un espacio en la línea " << i << endl;

        cout << endl;
        string restante(caracteres, i, n);
        cout << restante << endl;
    }
    else
    {
        cout << "ERROR! " << endl;
    }

    return EXIT_SUCCESS;
}