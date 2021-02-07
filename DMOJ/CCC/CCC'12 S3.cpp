#include <bits/stdc++.h>
using namespace std;


void solve(){  
    int n;
    cin>>n;
    vector<int> entr;
    map<int,int> freq;
    for(int i = 0, a; i < n; i++){
        cin>>a;
        if(freq[a]==0) entr.push_back(a);
        freq[a]++;
    }
    if(n==2){
        cout<<abs(entr[0]-entr[1]);
    } else {
    int one = -1, two = -1;
    for(int i = 0; i < entr.size(); i++){
        if(one==-1||freq[one]<freq[entr[i]]) {
            if(freq[two] < freq[one]&&abs(two-one)<abs(entr[i]-one)){
                two = one;
            }
            one = entr[i];
        } else if(freq[two]<=freq[entr[i]]){
            if(freq[two]==freq[entr[i]]){
                if(abs(two-one)<abs(entr[i]-one)){
                two = entr[i];
                }
            } else {
                two = entr[i];
            }
        } 

    }
    cout<<abs(one-two);
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
