#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int a;
    cin >> a;
    
    if (a % 2 == 0 and a > 2)
        cout << "YES";
    
    else
        cout << "NO";
    
    return 0;
}
