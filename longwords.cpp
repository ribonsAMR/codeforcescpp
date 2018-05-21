#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    
    int a;
    cin >> a;
    
    string lines;
    
    for (int i = 0; i < a; ++i){
        string temp;
        cin >> temp;
        if (temp.length() > 10){
            temp = temp[0] + to_string(temp.length()-2) + temp[temp.length()-1];
            lines += temp + '\n';
        }
        else
            lines += temp + '\n';
    }
    
    cout << lines;
    return 0;
}
