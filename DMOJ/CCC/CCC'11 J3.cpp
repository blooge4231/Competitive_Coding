#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, count = 2;
    cin>>a>>b;
    int prevsumac = b, sumac = a-b;
    while(1){
        if(sumac<=prevsumac){
            count++;
        } else if (sumac>prevsumac){
            count++;
            break;
        }
        int next = prevsumac-sumac;
        prevsumac = sumac;
        sumac = next;
    }
cout<<count;


  
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
