#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int cals = 0;
    if(a==1){
        cals+=461;
    } else if (a==2){
        cals+=431;
    } else if (a==3){
        cals+=420;
    }
    
    if(b==1){
        cals+=100;
    } else if (b==2){
        cals+=57;
    } else if (b==3){
        cals+=70;
    }

    if(c==1){
        cals+= 130;
    } else if(c==2){
        cals+= 160;
    } else if(c==3){
        cals+=118;
    }

    if(d==1){
        cals+=167;
    } else if(d==2){
        cals+=266;
    } else if(d==3){
        cals+=75;
    }
   cout<<"Your total Calorie count is "<<cals<<".";
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
