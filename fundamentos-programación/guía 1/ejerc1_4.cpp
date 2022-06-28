#include<iostream>
using std::cout,std::cin,std::endl;

int main()
{
  const float boleto_estudiantil = 17.0;
  float total_recaudado = 0.0, boleto = 0.0, boleto_trabajador = 0.0;
  int boletos_vendidos = 0, trabajadores = 0, estudiantes = 0;

  cout << "Total de boletos vendidos: ";
  cin >> boletos_vendidos;

  cout << "Cantidad de Trabajadores: ";
  cin >> trabajadores;

  cout << "Cantidad de Estudiantes: ";
  cin >> estudiantes;

  boleto = boleto_estudiantil * 100.0 / 50.0;
  boleto_trabajador = boleto - (boleto * 40.0 / 100.0);

  if(estudiantes == 0 || trabajadores == 0)
      {
          total_recaudado = boletos_vendidos * boleto;
      }
  else if(estudiantes != 0 || trabajadores != 0)
      {
          total_recaudado= (boletos_vendidos * boleto) -
                           (trabajadores * boleto ) +
                           (trabajadores * boleto_trabajador) -
                           (estudiantes * boleto) +
                           (estudiantes * boleto_estudiantil);
      }
  cout << "El total recaudado por los boletos es la suma de: $"
       << total_recaudado
       << endl;
  return 0;
}
