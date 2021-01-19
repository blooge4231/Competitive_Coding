#include <bits/stdc++.h>
using namespace std;
void solve(){
    int ant, eye;
    cin>>ant>>eye;
    if(ant>=3&&eye<=4){
        cout<<"TroyMartian"<<endl;
    }
     if(ant<=6&&eye>=2){
        cout<<"VladSaturnian"<<endl;
    }
    if(ant<=2&&eye<=3){
        cout<<"GraemeMercurian"<<endl;
    } 
    
   
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
