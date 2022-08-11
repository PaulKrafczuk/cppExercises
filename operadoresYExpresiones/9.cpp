//Calcular el nuevo salario de un obrero, si obtuvo un incremento del 25% sobre su salario anterior

#include<iostream>

int main(){

float salario, aumento=1.25, salarioConAumento;

std::cout<<"Cuanto fue su salario anterior? ";
std::cin>>salario;

salarioConAumento=salario*aumento;

std::cout<<"Su salario ahora sera de: "<<salarioConAumento<<" $\n";


    return 0;
}