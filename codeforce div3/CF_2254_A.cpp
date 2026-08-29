#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2]; 
        
        int round = 0; 
        
        while(v[0] != v[1] && v[1] != v[2] && v[0] != v[2]){
            sort(v.begin(), v.end());
            v[2]--;
            v[0]++; 

            round++;
        }
        
        cout << round << "\n"; 
    }
    return 0;
}