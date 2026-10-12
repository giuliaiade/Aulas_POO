/*                          AULA 1

    -Ler/ Escrever no ecrã: cin/cout
    -<> -> flechas mostram a direção da informação
    -Famoso ; sempre aqui
    -std -> fada do namespace
    -Mesmos tipos de dados +short

_____________________________________________________________________________*/

#include <algorithm>
#include <iostream>
#include "header.h"

using namespace std; //Posso retirar todos os std

int main() {
    int idade;
    string nome;

    std::cout << "Informe o seu nome" << std::endl;
    std::cin >> nome;

    std::cout << "Informe a sua idade" << std::endl;
    std::cin >> idade;

    std:: cout << "Ola, " << nome << " sua idade e: " << idade << std::endl;

    return 0;
}