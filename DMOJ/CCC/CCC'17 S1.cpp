#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int r[n];
    int s[n];
    int d = 0;
    int a = 0, b = 0;
    for(int i =0; i<n; i++){
        int x;
        cin>>x;
        r[i]=x;
    }
     for(int j =0; j<n; j++){
        int x;
        cin>>x;
        s[j]=x;
    }
    for(int k = 0; k<n;k++){
        a=a+r[k];
        b=b+s[k];
        if(a==b){
         d = k+1;
        }
    }
    cout<<d;
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
solve();
return 0;
}
