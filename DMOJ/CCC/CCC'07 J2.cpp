#include <bits/stdc++.h>
using namespace std;
void solve(){
    map<string, string> phrase;
    phrase["CU"] = "see you";
    phrase[":-)"] = "I'm happy";
    phrase[":-("] = "I'm unhappy";
    phrase[";-)"] = "wink";
    phrase[":-P"] = "stick out my tongue";
    phrase["(~.~)"] = "sleepy";
    phrase["TA"] = "totally awesome";
    phrase["CCC"] = "Canadian Computing Competition";
    phrase["CUZ"] = "because";
    phrase["TY"] = "thank-you";
    phrase["YW"] = "you're welcome";
    phrase["TTYL"] = "talk to you later";
    vector<string> a;
    string s;
    while(s.compare("TTYL")!=0){
        cin>>s;
        a.push_back(s);
    }
    for(int i = 0; i < a.size(); i++){
        if(phrase.find(a[i]) == phrase.end()){
            cout<<a[i]<<endl;
        } else {
            cout<<phrase[a[i]]<<endl;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
