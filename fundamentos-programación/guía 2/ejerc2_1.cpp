#include<iostream>

using std::cout,
      std::cin,
      std::endl;

int main()
{
  int Num1 = 0, Num2 = 0;
  cin >> Num1 >> Num2;

  if ( Num1 < Num2 )
    cout << Num1 << "\t" << Num2 << endl;
  else cout << Num2 << "\t" << Num1 << endl;
 return 0;
}

