#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int s, e;
    cin>>s>>e;
    int nums = 0;
    for(int i = s; i <= e; i++){
        int test = i;
        int divs = 0;
        for(int j = 1; j <= test; j++){
            if(test%j==0){
                divs++;
            }
        }
        if(divs==4){
           nums++;
        }
    }
cout<<"The number of RSA numbers between " <<s<<" and "<<e<<" is "<<nums;
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
