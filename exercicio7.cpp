#include <iostream>
#include <cstring>

int main() {
    
    char fruta[70];

    std::cout << "Digite 5 frutas: ";
    std::cin.getline(fruta, 70); 
    std::cout << "As frutas inseridas foram: " << fruta << std::endl;

    return 0;
}

