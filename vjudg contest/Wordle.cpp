#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s, t;
        cin >> s >> t;
        string res = " ";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == t[i])
                res += 'G';
            else
                res += 'B';
        }
        cout << res <<"\n";
    }
    return 0;
}