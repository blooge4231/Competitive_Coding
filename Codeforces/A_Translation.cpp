#include <bits/stdc++.h>
using namespace std;
string solve(){
    string s, r;
    getline(cin, s);
    getline(cin, r);
    for(int i = 0; i<s.length(); i++){
        if(s[i]!=r[r.length()-i-1])
            return "NO";
    }
    return "YES";

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<solve();
    return 0;
}
