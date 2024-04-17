#include <iostream>
#include <cstring>



//------------------------------------------------------------------------------
//                                   problemas
//------------------------------------------------------------------------------
#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

using namespace std;
int main() {
    
    int num;
    cout << "digite um numero de 1 a 7:" << endl;
    cin >> num;

    char color[7];
    color[0] = 'RED';
    color[1] = 'GREEN';
    color[2] = 'BLUE';
    color[3] = 'YELLOW';
    color[4] = 'MAGENTA';
    color[5] =  'CYAN';
    color[6] = 'WHITE';

    if (num == 1){
        std::cout << color[0] << "Este texto esta em vermelho." << RESET << std::endl;
    } else if (num == 2){
        std::cout << color[1] << "Este texto esta em verde." << RESET << std::endl;
    } else if (num == 3) {
        std::cout << color[2] << "Este texto esta em azul." << RESET << std::endl;
    } else if (num == 4){
        std::cout << color[3]<< "Este texto esta em amarelo." << RESET << std::endl;
    } else if (num == 5){
        std::cout << color [4]<< "Este texto esta em magenta." << RESET << std::endl;
    } else if (num == 6){
        std::cout << color[5] << "Este texto esta em ciano." << RESET << std::endl;
    } else {
        std::cout << color[6] << "Este texto esta em branco." << RESET << std::endl;
    }
    
    return 0;
}
    