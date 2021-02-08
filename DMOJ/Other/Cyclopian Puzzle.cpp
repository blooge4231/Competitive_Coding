#include <bits/stdc++.h>
using namespace std;


void recur(int d, int start, int end, map<int, char> sticks){

    if(d==1) {
        cout<<sticks[start];
        cout<<sticks[end]<<'\n';
    }
    else {
        recur(d-1, start, 6-(start+end), sticks);
        cout<<sticks[start];
        cout<<sticks[end]<<'\n';
        recur(d-1, 6-(start+end), end, sticks);

    }

}

void solve(){  
    map<int,char> sticks;
    sticks[1] = 'A'; 
    sticks[2] = 'B'; 
    sticks[3] = 'C';
    int d;
    cin>>d;
    recur(d, 1, 3, sticks);




   
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
