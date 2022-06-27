#include <iostream>
#include <cmath>

int main() {
	float hipotenusa=0,cateto_a=0,cateto_b=0;
	int aux=0;
	
 	std::cout<<"Escribe la longitud del cateto a: ";
 	std::cin>>cateto_a;
 	
 	std::cout<<"Escribe la longitud del cateto b: ";
 	std::cin>>cateto_b;

 	hipotenusa=sqrt(pow(cateto_a,2)+pow(cateto_b,2));
 	aux=hipotenusa;
 	hipotenusa=aux;
 	
 	std::cout<<"La hipotenusa es: "<<hipotenusa<<std::endl;

	return 0; 	
}
