#include <iostream>

int main()
{
    int lvl = 0:
    std::cout << "Inserici il livello di fizzbuzz"
    while (lvl <= 1)
        std::cin >> lvl;
        if (lvl <=1)
            std::cout << "ERRORE: Inserisci un valore > 1!\n";
            
    }
    
    std::cout << "Grazie. Calcolo fizzbuzz fino al numero "
            << lvl << "\n";
    
    //algoritmo di calcolo fizzbuzz
    for(int i=1; i <= lvl; i++){
        if(i%3 == 0 and i%5 == 0){
            std::cout << i << " fizzbuzz \n";
        }else if (i%3 == 0){
            std::cout << i << " fizz\n";
        }else if (i%5 == 0){
            std::cout << i << " buzz\n"
        }
    
    return 0;