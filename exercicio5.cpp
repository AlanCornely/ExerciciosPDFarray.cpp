#include <iostream>
#include <cstring>

int main() {
    
    char frase[20];

    
    std::cout << "Digite uma frase (maximo de 20 caracteres): ";
    std::cin.getline(frase, 20); // Usando cin.getline() para ler a frase com espaços

    std::cout << "A frase inserida foi: " << frase << std::endl;

// com ajuda do chat gpt para pegar a frase com os espaços.
    return 0;
}

