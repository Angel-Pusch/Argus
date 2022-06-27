#include <iostream>
#include <cmath>
using namespace std;
int main(){
    // Notación: una pulgada equivale a 2,54 centímetros
    // La fórmula utilizada para obtener la Anchura del TV
    // se obtendrá mediante el Teorema de Pitágoras
    // H²=a²+b²
    float pulgadas,altura,aux,anchura;

    cout<<"Tamaño del televisor (en pulgadas): ";
    cin>>pulgadas;

    cout<<"Altura del televisor (en centímetros): ";
    cin>>altura;

    aux=pulgadas*2.54; // conversión de pulgadas a centímetros
    anchura=sqrt(pow(aux,2)-pow(altura,2)); // Teorema de Pitágoras

    cout<<"El ancho del televisor es de: "<<anchura<<"Cm"<<endl;
    return 0;
}




