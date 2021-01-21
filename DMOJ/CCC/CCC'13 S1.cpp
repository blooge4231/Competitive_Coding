#include <bits/stdc++.h>
using namespace std;

void solve(){
    int y;
    cin>>y;
    bool dis = false;
    while(!dis){
        y++;
        string s = to_string(y);
        bool yee = true;
        for(int i = 0; i < s.length()-1; i++){
            for(int j = i+1; j < s.length(); j++){
                if(s[i]==s[j]){
                    yee = false;
                }
            }
        }
        if(yee==true){
            cout<<y;
            break;
        }
    }

    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
