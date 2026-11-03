#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
int main()
{
    string c = stella ;
    string b = $ ;
    string d = X ;
    string e = ciliege;
    string f = (7) ;
    string g = win ;
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