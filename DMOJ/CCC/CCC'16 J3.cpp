#include <bits/stdc++.h>
using namespace std;

void solve(){  
    string s;
    getline(cin, s);
    int len = 1;

    for(int i = 0; i < s.length(); i++){
        for(int j = 1; j <= s.length()-i; j++){
            string a = s.substr(i, j), b = s.substr(i, j);
            reverse(a.begin(), a.end());
            if(a.compare(b) == 0){
                if(len < a.length()) len = a.length();
            }

        }

    }

    cout<<len;


   
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
