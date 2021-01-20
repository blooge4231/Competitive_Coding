#include <bits/stdc++.h>
using namespace std;
void solve(){
    int day, eve, end;
    cin>>day>>eve>>end;
    double a = 0, b = 0;
    if(day<=100){
        a = (eve*0.15) + (end*0.2);
        b = (eve*0.35) + (end*0.25);
    } else if (day<=250){
        a = ((day-100)*0.25)+(eve*0.15) + (end*0.2);
        b = (eve*0.35) + (end*0.25);
    } else {
        a = ((day-100)*0.25)+(eve*0.15) + (end*0.2);
        b = ((day-250)*0.45)+(eve*0.35) + (end*0.25);
    }

    cout<<"Plan A costs "<<a<<endl;
    cout<<"Plan B costs "<<b<<endl;
    if(a==b){
        cout<<"Plan A and B are the same price.";
    } else if(a<b) {
        cout<<"Plan A is cheapest.";
    } else if(a>b){
        cout<<"Plan B is cheapest.";

    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
