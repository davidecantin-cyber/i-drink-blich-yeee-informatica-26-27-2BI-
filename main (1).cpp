#include <iostream>

int main()
{
    int a;
    int b;
    std::cout << "inserisci un numero intero: \n";
    std::cin >> a;
    std::cout << "inserisci il secondo numero intero: \n";
    std::cin >> b;
    if( a > b ){
        std::cout << ">>>> \n";
    }
    
    if( a < b){
        std::cout << "<<<< \n";
    }
    if(a == b){
        std::cout << "==== \n";
    }
    return 0;
    
}