#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string texto1, texto2, texto3;
    int n = 0;

    cout << "Ingrese una cadena de carácteres: ";
    getline(cin, texto1);

    cout << "Ingrese cualquier otra: ";
    getline(cin, texto2);

    cout << "Repita lo anterior: ";
    getline(cin, texto3);

    cout << endl;

    n = texto1.find(texto2);
    if (n != -1)
    {
        cout << texto2 << " Está contenido dentro de " << texto1 << endl;
    }

    n = texto1.find(texto3);
    if (n != -1)
    {
        cout << texto3 << " Está contenido dentro de " << texto1 << endl;
    }

    n = texto2.find(texto1);
    if (n != -1)
    {
        cout << texto1 << " Está contenido dentro de " << texto2 << endl;
    }

    n = texto2.find(texto3);
    if (n != -1)
    {
        cout << texto3 << "Está contenido dentro de " << texto2 << endl;
    }

    n = texto3.find(texto1);
    if (n != -1)
    {
        cout << texto1 << "Está contenido dentro de " << texto3 << endl;
    }

    n = texto3.find(texto2);
    if (n != -1)
    {
        cout << texto2 << "Está contenido dentrdo de " << texto3 << endl;
    }

    return EXIT_SUCCESS;
}