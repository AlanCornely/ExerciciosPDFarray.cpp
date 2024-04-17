#include <iostream>

using namespace std;
int main (){

    string str;
    
    cout << "digite uma letra:"<< endl;
    cin >> str;
    
    if(str == "a" || str == "e"|| str == "i" || str == "o" || str == "u"){
        cout << " é uma vogal!" << endl;
    } else {
        cout << " não é uma vogal." << endl;
    }
    return 0;
}