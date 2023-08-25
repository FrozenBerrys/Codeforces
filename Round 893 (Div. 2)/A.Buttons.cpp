#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
 
int main()
{
    long long n, i, j, k, t, a, b, c;
    cin >> t;
    while( t-- ){
        cin >> a >> b >> c;
        long long alice = a, bob = b;
        if(c%2 == 0){ alice += c/2; bob += c/2; }
        else{ alice += c/2+1; bob += c/2; }
        
        if( alice > bob ){ cout << "First"; }
        else if( bob > alice){ cout << "Second"; }
        else { cout << "Second"; }
        cout << endl;
    }
    
    return 0;
}
