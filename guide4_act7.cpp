#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string pal1, pal2, pal3;
    cout << "Introduce una cadena de texto" << endl;
    getline(cin, pal1);

    cout << "Introduce otra cadena" << endl;
    getline(cin, pal2);

    cout << "Introduce otra cadena" << endl;
    getline(cin, pal3);

    int pal1_l = pal1.size();
    int pal2_l = pal2.size();
    int pal3_l = pal3.size();

    if (pal1_l > pal2_l && pal1_l > pal3_l)
    {
        if (pal2_l > pal3_l)
        {
            cout << endl;
            cout << pal1 << endl;
            cout << pal2 << endl;
            cout << pal3 << endl;
        }
        else
        {
            cout << endl;
            cout << pal1 << endl;
            cout << pal3 << endl;
            cout << pal2 << endl;
        }
    }
    else if (pal2_l > pal1_l && pal2_l > pal3_l)
    {
        if (pal1_l > pal3_l)
        {
            cout << endl;
            cout << pal2 << endl;
            cout << pal1 << endl;
            cout << pal3 << endl;
        }
        else
        {
            cout << endl;
            cout << pal2 << endl;
            cout << pal3 << endl;
            cout << pal1 << endl;
        }
    }
    else if (pal3_l > pal1_l && pal3_l > pal2_l)
    {
        if (pal2_l > pal1_l)
        {
            cout << endl;
            cout << pal3 << endl;
            cout << pal2 << endl;
            cout << pal1 << endl;
        }
        else
        {
            cout << endl;
            cout << pal3 << endl;
            cout << pal1 << endl;
            cout << pal2 << endl;
        }
    }
    return EXIT_SUCCESS;
}