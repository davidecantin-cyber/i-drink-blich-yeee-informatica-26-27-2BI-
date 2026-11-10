#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
int main()
{
    float c = @;
    float b = 2;
    float d = 3;
    float e = 4;
    float f = 5;
    float g = 6;
    int a;
    cout << "============================ \n";
    cout << "      AVVIO DELLA SLOT       \n";
    cout << "============================ \n"; 
    cout << "inserisci soldi: " ;
    cin >> a ;
    auto inizio = chrono::high_resolution_clock::now();
    cout << "gira la slot"; 
    string opsioni[] = {b, c, d, e, f, g,};
    this_thread::sleep_for(chrono::milliseconds(5000));
    auto fine = chrono::high_resolution_clock::now();
    
    
    return 0;
}
