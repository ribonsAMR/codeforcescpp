#include <iostream>

using namespace std;

int main(){
    int listLength, current = 1, result = 1;
    cin >> listLength;

    int list[listLength];
    for (int i = 0; i < listLength; i++)
        cin >> list[i];
    
    for (int i = 0; i < listLength - 1; i++) {
        int a = list[i], b = list[i+1];
        
        if (b >= a) {
            current++;
            result = max(current, result);
            /*
             if (current > result)
                result = current
             */
        }
        else //break
            current = 1;
    }
    
    cout << result;
    return 0;
}