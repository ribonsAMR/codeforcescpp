#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
  int x = 0;
  cin >> x;
  
  if (x % 5 == 0)
    cout << x / 5;
  else
    cout << (x / 5) + 1;
  
  return 0;
}
