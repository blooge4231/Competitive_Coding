#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a, b;
    cin>>a>>b;
    int diff = b-a;
    if(diff<=0){
        cout<<"Congratulations, you are within the speed limit!";
    } else if (diff>=1&&diff<=20){
        cout<<"You are speeding and your fine is $100.";
    } else if (diff>=21&&diff<=30){
        cout<<"You are speeding and your fine is $270.";
    } else if (diff>=31){
        cout<<"You are speeding and your fine is $500.";
    }
   
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
