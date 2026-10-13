
#include <iostream>

int main(){
    int num1, num2;
    std::cout << "inserici il primo numero intero \n"; 
    std::cin >> num1;
    
    std::cout << "iserisci il secondo numero intero \n";
    std::cin >> num2;
    
    if (num1 > num2) {
        std::cout << ">>>>> \n";
    }    else if (num1 < num2) {
        std::cout << "<<<<< \n";
        }else{
            std::cout << "===== \n";
        }
    
    
    return 0;
}