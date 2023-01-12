#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string nombre, apellido, facultad, email;
    string f_nac, dia, mes;
    char inicial;
    int i = 0;

    cout << "Introduce tu nombre: ";   // Aquí estamos definiendo el nombre
    getline(cin, nombre);              // del cual solo extraeremos el primer caracter
    inicial = tolower(nombre[0]);      // por orden de consigna, en este caso utilizaremos
    cout << "Introduce tu apellido: "; // la herramienta 'tolower', para dejar la variante en minúscula.
    getline(cin, apellido);

    // -- Recortamos en caso exista más de un apellido --
    while (i != ' ')
    {
        int n = apellido.size();
        if (apellido[i] == ' ')
        {
            apellido.replace(i, n, "");
            break;
        }
        else 
        {
            break;
        }
        apellido[i];
        i++;
    }

    cout << "introduce tu fecha de nacimiento en formato DD/MM/AAAA: ";
    cin >> f_nac;
    cin.get();

    // -- Mecanismo para extraer los dd & mmm --
    i = 0;
    while (i < f_nac.size())
    {
        if (f_nac[i] == '/')
        {
            dia = f_nac.substr(0, 2); // Obtenemos los días
            int n = 3;
            if (f_nac[i] == '/')
            {
                mes = f_nac.substr(n, 2); // Obtenemos los meses
            }
        }
        i++;
    }       // No funcionó como esperaba, pero ya demaciado la intenté complicar
            // Lo dejaré aquí, que ya funciona y con eso basta.

    cout << "introduce el nombre de la institución: ";
    getline(cin, facultad);

    email = inicial + apellido + dia + mes + "@" + facultad + ".edu.ar";

    cout << endl;
    cout <<  "Tu email será: " << email << endl;

    return EXIT_SUCCESS;
}