#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string cadena1, cadena2, cadena3;

    cout << "Introduce 3 palabras: ";
    cin >> cadena1 >> cadena2 >> cadena3;

    if ( cadena1 < cadena2 && cadena2 < cadena3 )
    {
        cout << cadena1 << " <- " << cadena2 << " <- " << cadena3 << endl;
    }
    else if ( cadena3 < cadena2 && cadena2 < cadena1 )
    {
        cout << cadena3 << " <- " << cadena2 << " <- " << cadena1 << endl;
    } else if ( cadena3 < cadena1 && cadena1 < cadena2 )

    {
        cout << cadena3 << " <- " << cadena1 << " <- " << cadena2 << endl;
    }
    else if ( cadena2 < cadena3 && cadena3 < cadena1 )
    {
        cout << cadena2 << " <- " << cadena3 << " <- " << cadena1 << endl;
    } else if ( cadena2 < cadena1 && cadena1 < cadena3 )
    {
        cout << cadena2 << " <- " << cadena1 << " <- " << cadena3 << endl;
    }

    return EXIT_SUCCESS;
}