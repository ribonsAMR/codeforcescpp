//GNU C++14
#include <iostream>

using namespace std;

int main() {
    string s, t, rs;
    cin >> s;
    cin >> t;

    char *ptr = &s[s.length() - 1];
    
    unsigned long len = s.length();
    
    for (int i = len-1; i >= 0; i--, ptr--) {
        rs += *ptr;
    }
    if (t == rs) {
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}

/*
 //GNU C++17
 #include <iostream>
 using namespace std;
 
 int main() {
 
 string s, t;
 cin >> s;
 cin >> t;
 
 reverse(s.begin(), s.end());
 
 if (t == s) {
 cout << "YES";
 }
 else{
 cout << "NO";
 }
 
 return 0;
 }
 */
