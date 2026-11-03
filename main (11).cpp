
#include <iostream>

int main()
{
    int v1, v2, v3, v4, v5 = 200;
    std::cout << "inserisci prima variabile \n";
    std::cin >> v1;
    std::cout << "inserisci seconda variabile \n";
    std::cin >> v2;
    std::cout << "inserisci terza variabile \n";
    std::cin >> v3;
    std::cout << "inserisci quarta variabile \n";
    std::cin >> v4;
    
    std::cout << v1 - v2 + v3 / v4 << "\n";
    
    if (v1 - v2 + v3 / v4 <= v5){
        std::cout << "Leto non fare i peti che stai senza cervello \n";
    } else {
        std::cout << "Baebaro non fare il barbaro che stai senza braccia \n";
    }
    

    return 0;
}