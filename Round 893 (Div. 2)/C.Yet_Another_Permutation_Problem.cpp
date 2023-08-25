#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
 
bool prime(long long n){
    long long i;
    for (i = 2; i <= n/2; i++) {
        if (n % i == 0) { return 0; }
  }
  return 1;
}
 
int main()
{
    long long t, i, j, k, l, o, p, n;
    cin >> t;
    
    while(t--){
        cin >> n;
        p = n/2;
        vector<int> ans;
        ans.push_back(1);
        for( i = 2; i <= n; i *= 2 ){
            ans.push_back(i);
        }
        
        for( i = 3; i <= n; i+= 2){
            for( j = i; j <= n; j*= 2 ){
                ans.push_back(j);
            }
        }
        for( i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
        ans.clear();
    }
    return 0;
}
