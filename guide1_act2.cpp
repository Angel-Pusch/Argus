#include <iostream>
#include <string>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string name = "Sin Nombre";

    /* El peso y la altura son medidos en relación Metros - Kilogramos */
    float height = 0;
    float weight = 0;

    int IMC = 0;

    cout << "Introduce tu nombre completo: ";
    getline(cin, name);

    cout << "Introduce tu altura (en metros): ";
    cin >> height;

    cout << "Introduce tu peso (en kilogramos): ";
    cin >> weight;

    IMC = weight / pow(height, 2);

    if (IMC < 18.5)
    {
        cout << name << endl
             << "Su índice de masa corporal es: " << IMC << ", está dentro del rango de peso insuficiente" << endl;
    }
    else if (IMC > 18.5 && IMC < 24.9)
    {
        cout << name << endl
             << "Su índice de masa corporal es: " << IMC << ", está dentro del rango de peso normal o saludable." << endl;
    }
    else if (IMC > 25 && IMC < 29.9)
    {
        cout << name << endl
             << "Su índice de masa corporal es: " << IMC << ", está dentro del rango de sobrepeso." << endl;
    }
    else {
        cout << name << endl
             << "Su índice de masa corporal es: " << IMC << ", está dentro del rango de obesidad." << endl;
    }

    return EXIT_SUCCESS;
}