#include <iostream>

int main() {

    //Faça um algoritmo que leia a idade de uma pessoa expressa em
    // anos, meses e dias e mostre-a expressa apenas em dias.

    int anos;
    int meses;
    int dias;
    int idade;


    std::cout << "Informe a sua Idade. \n \n";

    std::cout << "Idade: ";
    std::cin >> anos;

    std::cout << "Mes: ";
    std::cin >> meses;

    std::cout << "Dia: ";
    std::cin >> dias;

    idade = (dias + (anos * 365) + (meses * 30));

    std::cout << "Total dias e: " << idade;
    
}
