#include<iostream>
using namespace::std;
int main()
{
  float Presupuesto = 0.0, DescGinecologia = 40.0,
        DescTraumatologia = 30.0, DescPediatria = 30.0,
        TotG = 0.0, TotT = 0.0,TotP = 0.0;
  cin>>Presupuesto;
  
  TotG = Presupuesto * DescGinecologia / 100;
  TotT = Presupuesto * DescTraumatologia / 100;
  TotP = Presupuesto * DescPediatria / 100;
  
  cout << "$" << TotG << " "
       << "$" << TotT << " "
       << "$" << TotP << endl;
  return 0;
}
