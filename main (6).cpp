#include <iostream>

using namespace std;
int main()
{
    float v[8]={4.5,5.25,6.25,6,6.5,7,4.75,7};
    //cout << v[0] << " " << v[1] << " " << v[2] << endl;//
    for(int i = 0; i < 8; i++ ){
        cout << v[i] << "\n";
    }
    
    float somma = 0;
    for (int i = 0; i < 8; i++){
        somma = somma + v[i];
    }
    
    float media = somma/8;
    cout << "la media è " << media << "\n";
    
}