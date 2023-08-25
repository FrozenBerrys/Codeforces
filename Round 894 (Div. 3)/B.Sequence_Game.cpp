#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main(){
    long n, i, j, k, t, p, l, temp;
    cin >> t;
    vector<long> v;
    while(t--){
        v.clear();
        cin >> n;
            cin >> temp;
            v.push_back(temp);
        for( i = 1; i < n; i++){
            cin >> k;
            if( k < temp ){
                v.push_back(1); v.push_back(k);
            } else { v.push_back(k); }
            temp = k;
        }
        cout << v.size() << endl;
        for( i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
 
 
 
 
    return 0;
}
