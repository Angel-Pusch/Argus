#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string correo;
    int i = 0, n = 0;

    cout << "Introduzca la dirección de correo electrónico: " << endl;
    getline(cin, correo);

    n = correo.size();
    string comprob = correo.substr(n - 4, n);
    string comprob2 = correo.substr(2, n);

    if (comprob.find(".com") != -1 && correo.find(' ') == -1)
    {
        if (correo[1] = '@' && comprob2.find('@') != -1)
        {
            cout << endl
                 << "La dirección es válida." << endl;
        }
        else
        {
            cout << endl
                 << "La dirección es inválida." << endl;
        }
    }
    else
    {
        cout << endl
             << "La dirección es inválida." << endl;
    }

    return EXIT_SUCCESS;
}