#include<iostream>
using std::cout,std::cin,std::endl;

int main()
{
  float boleto_estudiantil = 0.0,total_recaudado = 0.0, boleto = 0.0, boleto_trabajador = 0.0;
  int boletos_vendidos = 0, trabajador = 0, estudiante = 0, comun=0;

  cout << "\nPrecio del boleto estudiantil: ";
  cin >> boleto_estudiantil;

  cout << "Cantidad de boletos comunes: ";
  cin >> comun;

  cout << "Cantidad de boletos de trabajo: ";
  cin >> trabajador;

  cout << "Cantidad de boletos de estudiante: ";
  cin >> estudiante;

  boleto = boleto_estudiantil * 100.0 / 50.0;
  boleto_trabajador = boleto - (boleto * 40.0 / 100.0);
  boletos_vendidos = comun + trabajador + estudiante;

  if(estudiante == 0 || trabajador == 0)
      {
          total_recaudado = comun * boleto;
      }
  else if(estudiante != 0 || trabajador != 0)
      {
          total_recaudado = (boletos_vendidos * boleto) -
                            (trabajador * boleto ) +
                            (trabajador * boleto_trabajador) -
                            (estudiante * boleto) +
                            (estudiante * boleto_estudiantil);
      }

  cout << "\vTotal de boletos vendidos: "
       << boletos_vendidos
       << endl
       << "Cantidad bol-C: " << comun << " - recaudó $" << comun*boleto
       << endl
       << "Cantidad bol-T: " << trabajador << " - recaudó $" << trabajador*boleto_trabajador
       << endl
       << "Cantidad bol-E: " << estudiante << " - recaudó $" << estudiante*boleto_estudiantil
       << endl
       << "En total se recaudó una suma de: $"
       << total_recaudado
       << endl;

  return 0;
}
