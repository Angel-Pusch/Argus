#include <iostream>
using namespace std;
int main(){
    float ARS,USD=124.26,EUR=131.24,BRL=23.70;

    cout<<"Ingrese un monto (ARS): $";
    cin>>ARS;

    cout<<"$"<<ARS<<"(ARS) "<<"Son: $"<<ARS/USD<<" Dólares"<<endl;
    cout<<"$"<<ARS<<"(ARS) "<<"Son: $"<<ARS/EUR<<" Euros"<<endl;
    cout<<"$"<<ARS<<"(ARS) "<<"Son: $"<<ARS/BRL<<" Reales"<<endl;
    return 0;
}
