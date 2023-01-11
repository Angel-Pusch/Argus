#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int palabras_num = 0;
    int i = 0;
    string palabra;
    cout << "Inserte un texto: ";
    getline(cin, palabra);

    int contador = palabra.size() - 1;
    char primer_letra = palabra[0];
    char ultima_letra = palabra[contador];

    cout << "El texto comienza con la letra: " << primer_letra << endl;
    cout << "Y finaliza con la letra: " << ultima_letra << endl;

    while (i != contador)
    {
        char caracter = palabra[i];
        if (caracter == ' ')
        {
            palabras_num++;
        }

        i++;
    }

    cout << "La cantidad de palabras es de: " << palabras_num + 1 << endl;
    return EXIT_SUCCESS;
}