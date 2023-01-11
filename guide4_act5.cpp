#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

int main()
{
    string expresion = "pero";
    expresion.replace(0, 4, "sin embargo");

    cout << expresion << endl;

    return EXIT_SUCCESS;
}