#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main(){
    long n, i, j, t, p, l, m;
    cin >> t;
    string s;
    vector<string> temp;
    vector<string> v;
    while( t-- ){
        v.clear();
        temp.clear();
        cin >> n >> m;
        int ve = 0, ai = 0, k = 0, a = 0;
        for( i = 0; i < n; i++){
            cin >> s;
            temp.push_back(s);
        }
        for( j = 0; j < m; j++){
            string l = "";
            for( i = 0; i < n; i++){
                l += temp[i][j];
            }
            v.push_back(l);
        }
        
        for( i = 0; i < v.size(); i++ ){
            for( j = 0; j < m; j++){
                if( ve == 0 ){
                    if( v[i][j] == 'v'){
                        ve = 1; break;
                    }
                }
                else if( ai == 0 ){
                    if( v[i][j] == 'i'){
                        ai = 1; break;
                    }
                }
                else if( k == 0 ){
                    if( v[i][j] == 'k'){
                        k = 1; break;
                    }
                }
                else if( a == 0 ){
                    if( v[i][j] == 'a'){
                        a = 1; break;
                    }
                }
            }
        }
        
    if( ve == 0 || ai == 0 || k == 0 || a == 0 ){
        cout << "NO";
    } else { cout << "YES"; }
    cout << endl; 
    }
    
    return 0;
}
