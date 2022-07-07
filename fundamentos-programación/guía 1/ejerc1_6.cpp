#include<iostream>
using std::cout,
      std::cin,
      std::endl,
      std::string;

int main()
{
  string NyA1="", NyA2="";
  float sueldoBasico=0.0, kmsRecorridos1=0.0, kmsRecorridos2=0.0, bonKms=50.0, pagoTotal1=0.0, pagoTotal2=0.0;

  cout << "Ingrese el sueldo básico: ";
  cin >> sueldoBasico;

  cin.get();
  cout << "N&A primer chofer: ";
  getline(cin,NyA1);
  cout << "Kilómetros recorridos en el mes: ";
  cin >> kmsRecorridos1;
  pagoTotal1 = sueldoBasico + (kmsRecorridos1 * bonKms);

  cout << "\n";

  cin.get();
  cout << "N&A segundo chofer: ";
  getline(cin,NyA2);
  cout << "Kilómetros recorridos en el mes: ";
  cin >> kmsRecorridos2;
  pagoTotal2 = sueldoBasico + (kmsRecorridos2 * bonKms);

  cout << "\v";
  cout << "Liquidación mensual de choferes"
       << endl
       << "Nombre del Chofer 1: " << NyA1 << "\tTotal a Cobrar: $" << pagoTotal1
       << endl
       << "Nombre del Chofer 2: " << NyA2 << "\tTotal a Cobrar: $" << pagoTotal2
       << endl
       << "Total general: $" << pagoTotal1 + pagoTotal2
       << endl;
  return 0;
}
