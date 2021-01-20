#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int q, n;
    cin>>q>>n;
    vector<int> D, P;
    
    for(int i = 0; i<n; i++){
        int s; cin>>s; D.push_back(s);
    } 
    for(int i = 0; i<n; i++){
        int s; cin>>s; P.push_back(s);
    }
    sort(D.begin(),D.end());
    sort(P.begin(), P.end());
    int sum = 0;
    if(q == 1){
        for(int i = 0; i < n; i++){
            sum+= max(D[i],P[i]);
        }
    } else {
        while(D.size()!=0){
            int a = D.back();
            int b = P.front();
            int c = D.front();
            int d = P.back();
            if(max(a,b)>max(c,d)){
                sum+=max(a,b);
                D.pop_back();
                P.erase(P.begin());
            } else {
                sum+=max(c,d);
                P.pop_back();
                D.erase(D.begin());
            }

        }
    }
    
cout<<sum;

    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
