#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int palabras_num = 0;
    int contador = 0;
    int i = 0;
    string palabra;
    cout << "Inserte un texto: ";
    getline(cin, palabra);

    int palabras_num = 0, contador = 0, i = 0;
    char primer_letra = palabra[0];
    contador = palabra.size() - 1;
    char ultima_letra = palabra[contador];

    cout << primer_letra << endl;
    cout << ultima_letra << endl;

    while (i != contador)
    {
        char caracter = palabra[i];
        if (caracter == ' ')
        {
            palabras_num++;
        }

        i++;
    }

    cout << "La cantidad de palabras es de: " << palabras_num+1 << endl;
    return EXIT_SUCCESS;
}