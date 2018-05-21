#include <iostream>

using namespace std;

int main(){
    
    int a, b, c;
    cin >> a >> b;
    
    int n[a];
    
    for (int i = 0; i < a; ++i)
        cin >> n[i];
    
    for (int i = 0; i < a; ++i)
        if (n[i] >= n[b-1] and n[i] > 0)
            c += 1;
       
    
    cout << c;
    
    return 0;
}
