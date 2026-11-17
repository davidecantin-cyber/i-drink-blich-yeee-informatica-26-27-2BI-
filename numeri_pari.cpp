#include <iostream>
using namespace std;

int main()
{
    int v[10]={-2,7,4,-5,-3,4,5,-1,-9,9};
    int neg = 0;
    for (int i = 0; i < 10; i++){
        if (v[i]% 2 == 0){
            cout << i << " ";
        }
    }
    
    
    return 0;
}
