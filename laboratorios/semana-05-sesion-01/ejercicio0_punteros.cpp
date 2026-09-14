#include <iostream>

int main(){
    int numero=10;
    int* ptr_numero=&numero;
    std::cout<<"Direccion de memoria"<<ptr_numero<<std::endl;
    std::cout<<"Valor "<<*ptr_numero<<std::endl;

    int notas[5]={100,70,98,90,80};
    int* ptr_notas=notas;
    std::cout<<"Direccion de memoria "<<ptr_notas<<std::endl;
    std::cout<<"Valor "<<*ptr_notas<<std::endl;
    for(int i=0;i<5;i++){
        std::cout<<"Direccion "<<i+1<<" : "<<(ptr_notas+i)<<std::endl;
        std::cout<<"Valor "<<i+1<<" : "<<*(ptr_notas+i)<<std::endl;
    }
}