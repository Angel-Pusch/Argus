#include<iostream>

using std::cout,
      std::cin;

int main()
{
  int num = 0;
  cout << "Ingrese un número: ";
  cin >> num;

  if ( num == 0 )
  {
    cout << "El número es cero\n";
  } else if ( num < 0 )
    {
      cout << "El número es negativo\n";
    } else cout << "El número es positivo\n";

 // if ( num != ( num / 2) * 2 )
  if ( num % 2 == 0 )
  {
    cout << "El número es par\n";
  } else cout << "El número es impar\n";

  if ( num % 5 == 0 && num % 3 == 0 )
  {
  cout << "El número es múltiplo de 5 y de 3 a la vez\n";
  } else if ( num % 5 == 0 )
    {
      cout << "El número es múltiplo de 5 pero no de 3\n";
    } else if ( num % 3 == 0)
      {
        cout << "El número es múltiplo de 3 pero no de 5\n";
      } else cout << "El número no es múltiplo de 5 ni de 3\n";

  return 0;
}

