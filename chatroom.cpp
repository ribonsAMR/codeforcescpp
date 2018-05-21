// Solution 1
#include <iostream>

using namespace std;

int main(){
    string user_input, result, word = "hello";
    cin >> user_input;
    
    int index = 0;
    for (int i = 0; i < word.size(); i++)
        for (int j = index; j < user_input.size(); j++) {
            if (word[i] == user_input[j]){
                index = j + 1; // Move to the next char in user_input
                result += user_input[j]; // Add the char to result
                break;
            }
        }
        
    if (result == word)
        cout << "YES";
    
    else
        cout << "NO";
    
    return 0;
}

// Solution 2
// Check my python solution

#include <iostream>

using namespace std;

int main(){
    string user_input, result, word = "hello";
    cin >> user_input;
    
    int index = 0;
    
    for (int i = 0; i < user_input.size(); i++) {
        if (index == user_input.size())
            break;
        if (user_input[i] == word[index]) {
            index += 1; // Move to next char in word
        }
    }
    
    if (index == 5)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
