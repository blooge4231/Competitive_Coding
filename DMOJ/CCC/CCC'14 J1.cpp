#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a, b, c;
    cin>>a>>b>>c;
    if(a==60&&b==60&&c==60){
        cout<<"Equilateral";
    } else if(a+b+c == 180){
        if(a==b||a==c||b==c){
            cout<<"Isosceles";
        } else {
            cout<<"Scalene";
        }
    } else {
        cout<<"Error";
    }
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
