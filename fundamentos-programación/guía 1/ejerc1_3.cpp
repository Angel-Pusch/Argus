#include <iostream>

int main(){
    // Este código es declarativo por lo tanto, no necesita comentarios ☕️
    float distancia_en_kms=7.5,velocidad_en_km_h=0,tiempo_en_horas=0,hora_entrada=0.00,hora_salida=0.00;
    int horas=0,minutos=0,segundos=0;
    float aux1=0.00,aux2=0.00,aux3=0.00;
    std::string patente="";

    std::cout<<"Introduce la patente: ";
    std::cin>>patente;

    std::cout<<"Hora (en formato HHMMSS) del paso al primer puesto: ";
    std::cin>>hora_entrada;

    std::cout<<"Hora (en formato HHMMSS) del paso al segundo puesto: ";
    std::cin>>hora_salida;

    horas=hora_entrada/10000;
    minutos=(hora_entrada/100)-(horas*100);
    segundos=hora_entrada-horas*10000-minutos*100;
    aux1=horas;aux2=minutos;aux3=segundos;
    hora_entrada=aux1+aux2/60+aux3/3600;

    horas=hora_salida/10000;
    minutos=(hora_salida/100)-(horas*100);
    segundos=hora_salida-horas*10000-minutos*100;
    aux1=horas;aux2=minutos;aux3=segundos;
    hora_salida=aux1+aux2/60+aux3/3600;

    tiempo_en_horas=hora_salida-hora_entrada;

    velocidad_en_km_h=distancia_en_kms=7.5/tiempo_en_horas;

    std::cout<<"La patente del vehiculo es: "<<patente<<std::endl;
    std::cout<<"La velocidad en la cual recorrió el tramo fue de: "<<velocidad_en_km_h<<"Km/s"<<std::endl;

    return 0;
}
