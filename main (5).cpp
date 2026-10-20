

#include <iostream>



int main()
{
    float n1, n2, n3, n4, n5;
    
    std::cout << " inserici primo numero \n";
    std::cin >> n1;
    std::cout << " inserici secondo numero \n";
    std::cin >> n2;
    std::cout << " inserici terzo numero \n";
    std::cin >> n3;
    std::cout << " inserici quarto numero \n";
    std::cin >> n4;
    std::cout << " inserici quinto numero \n";
    std::cin >> n5;
    
    std::cout << "Media =" << (n1 + n2 + n3 + n4 + n5)/5;
    return 0;
}