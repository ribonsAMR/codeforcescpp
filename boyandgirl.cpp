#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string a;
    cin >> a;
    
    string b;
    
    for (int i = 0; i < a.length() ; i++){
        if (b.find(a[i]) == string::npos)
            b += a[i];
    }
    
    if (b.length() % 2 == 0)
        cout << "CHAT WITH HER!";
    
    else
        cout << "IGNORE HIM!";
    
    return 0;
}
