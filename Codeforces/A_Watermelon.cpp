#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a;
    bool isTrue =false;
    cin>>a;
    for(int i = 2; i<a;i+=2){
        int b = a-i;
        if(b%2==0){
            isTrue= true;
            break;
        } 
    }
    if(isTrue==true){
       cout<<"YES";
    } else {
       cout<<"NO";

    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
