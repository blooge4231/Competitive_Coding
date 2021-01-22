#include <bits/stdc++.h>
using namespace std;
void solve(){
    string word;
    cin>>word;
    string next = "";
    for(int i = 0; i < word.length(); i++){
        char c = word[i];
        bool ins = false, ins2 = false;
        char cons;
        next+=c;
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') continue;
        int b = min(min(min(min(abs(c-'u'), abs(c-'o')), abs(c-'i')), abs(c-'e')), abs(c-'a'));
        if(c-b=='a'||c-b=='e'||c-b=='i'||c-b=='o'||c-b=='u'){
            next+=c-b;
        } else {
            next+=c+b;
        }
        if(c=='z'){
            next+=c;
            continue;
        }
        for(int j = 1; j+c<='z';j++){
        if(c+j!='a'&&c+j!='e'&&c+j!='i'&&c+j!='o'&&c+j!='u'){
            next+=c+j;
            break;
        }

        }

    }
    cout<<next;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
