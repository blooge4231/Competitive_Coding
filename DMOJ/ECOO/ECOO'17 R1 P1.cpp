#include <bits/stdc++.h>
using namespace std;
void solve(){
    for(int i = 0; i<10;i++){
        int cost, n;
        float y1, y2, y3, y4;
        cin>>cost>>y1>>y2>>y3>>y4>>n;
        int c1,c2,c3,c4,p1, p2, p3, p4;
        c1 = floor(n*y1);
        
        c2 = floor(n*y2);
        
        c3 = floor(n*y3);
        c4 = floor(n*y4);
        if(c1+c2+c3+c4<n||c1+c2+c3+c4>n){
            if(c1>c2&&c1>c3&&c1>c4){
                c1+= abs(c1+c2+c3+c4-n);
            } else if (c2>c1&&c2>c3&&c2>c4){
                c2+= abs(c1+c2+c3+c4-n); 
            } else if (c3>c1&&c3>c2&&c3>c4){
                c3+= abs(c1+c2+c3+c4-n);
            } else if (c4>c1&&c4>c2&&c4>c3){
                c4+= abs(c1+c2+c3+c4-n);
            }
        }
        p1 = c1*12;
        p2 = c2*10;
        p3 = c3*7;
        p4 = c4*5;  
        if((p1+p2+p3+p4)/2<cost){
            cout<<"YES"<<'\n';
        } else {
            cout<<"NO"<<'\n';
        }

    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
