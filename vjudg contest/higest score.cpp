#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a,b,c,d; cin >> a >> b >> c >> d;
        if(a > b && a > b && a > d)
            cout <<a << "\n";
        else if(b > a && b > c  && b > d)
            cout << b << "\n";
        else if(c > a &&  c > b && c > d)
            cout << c <<"\n";
        else
            cout <<d <<"\n";
    }
    return 0;
}