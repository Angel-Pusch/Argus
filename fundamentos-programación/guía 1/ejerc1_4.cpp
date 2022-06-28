#include<iostream>

int main(){
    const float boleto_estudiantil=17.00;
    float total_recaudado=0,boleto=0.00,boleto_trabajador=0.00;
    int boletos_vendidos=0,trabajadores=0,estudiantes=0;

    std::cout<<"Total de boletos vendidos: ";
    std::cin>>boletos_vendidos;

    std::cout<<"Cantidad de Trabajadores: ";
    std::cin>>trabajadores;

    std::cout<<"Cantidad de Estudiantes: ";
    std::cin>>estudiantes;

    boleto=boleto_estudiantil*100/50;
    boleto_trabajador=boleto-(boleto*40/100);

    if(estudiantes==0 || trabajadores==0)
            total_recaudado=boletos_vendidos*boleto;
    if(estudiantes!=0 || trabajadores!=0)
            total_recaudado=(boletos_vendidos*boleto)-(trabajadores*boleto)+(trabajadores*boleto_trabajador)-(estudiantes*boleto)+(estudiantes*boleto_estudiantil);
    std::cout<<"El total recaudado por los boletos es la suma de: $"<<total_recaudado<<std::endl;
    return 0;
}
