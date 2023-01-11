#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string palabra;
    int palabras_num = 0;

    cout << "Inserte un texto: ";
    getline(cin, palabra);

    char primer_letra = palabra[0];
    char ultima_letra = palabra[palabra.size() - 1];

    cout << "El texto comienza con la letra: " << primer_letra << endl;
    cout << "Y finaliza con la letra: " << ultima_letra << endl;

    for (int i = 0; i < palabra.size(); i++)
    {
        if (palabra[i] == ' ' && palabra[i + 1 != ' '])
        {
            palabras_num = palabras_num + 1;
        }
    }

    palabras_num++;
    if (palabras_num > 1)
    {
        cout << "La cadena posee más de una palabra. " << "(" << palabras_num << ")" << endl;
    }
    else if (palabras_num <= 1)
    {
        cout << "La cadena contiene una palabra."<< endl;
    }

    return EXIT_SUCCESS;
}