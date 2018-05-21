#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    
    long long a, b, c;
    
    cin >> a >> b >> c;
    
    cout << (long long)(ceil(a/(double)c) * ceil(b/(double)c));
    
    return 0;
}
