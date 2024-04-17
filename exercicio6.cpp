#include <iostream>
#include <cstring>

int main() {
    
    char numero[10];

    std::cout << "Digite 10 numeros: ";
    std::cin.getline(numero, 10); // Usando cin.getline() para ler a frase com espaços

    std::cout << " os numeros inseridos foram: " << numero << std::endl;

    return 0;
}