#include <iostream>

int main() {
    float largo_mts=0,alto_mts=0,arena=0;
    std::cout<<"Ingresa el largo de la pared (en metros): "<<std::endl;
    std::cin>>largo_mts;
    std::cout<<"Ingresa el alto de la pared(en metros): "<<std::endl;
    std::cin>>alto_mts;

    arena=(largo_mts*alto_mts)/2;
    std::cout <<"Para revocar la pared se necesitan "<<arena<<"m³ de arena"<<std::endl;
    return 0;
}
