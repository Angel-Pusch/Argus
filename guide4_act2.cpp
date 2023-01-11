#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string cadena1 = "Sean bendecidos los bienaventurados";
    string subcadena1 (cadena1, 0, 4);
    string subcadena2 (cadena1, 20, 35);
    cout << subcadena1 << " " << subcadena2 << endl;
    return EXIT_SUCCESS;
}