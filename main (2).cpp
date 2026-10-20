

#include <iostream>

int main()
{
    float a;
    float b;
    float c;
    float d;
    float e;
    
    std::cout << "inserisci il primo numero: ";
    std::cin >> a;
    std::cout << "inserisci il secondo numero: ";
    std::cin >> b;
    std::cout << "inserisci il terzo numero: ";
    std::cin >> c;
    std::cout << "inserisci il quarto numero: ";
    std::cin >> d;
    std::cout << "inserisci il quinto numero: ";
    std::cin >> e;
    
    std::cout << "la media è: " << (a+b+c+d+e)/5;


    return 0;
}