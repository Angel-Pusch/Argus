#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main () {
    int current_year = 2023;
    int born_year = 0;

    cout << "Introduce tu año de nacimiento: ";
    cin >> born_year;

    born_year = current_year - born_year;

    cout << "Tu edad es: " << born_year << " años" << endl;
    return EXIT_SUCCESS;
}