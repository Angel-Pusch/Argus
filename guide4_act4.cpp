#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string pal1 = "First first";
    string pal2 = "things ";
    int pos = 6, aux;

    aux = pal1.size();
    if (pos < aux)
    {
        pal1.insert(pos, pal2);
        cout << pal1 << endl;
    }
    else
    {
        cout << "ERROR!" << endl;
    }

    return EXIT_SUCCESS;
}