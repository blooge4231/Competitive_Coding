#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<string> one, two;
    for(int i = 0; i < n; i++ ){
        string s;
        cin>>s;
        one.push_back(s);
    }
    for(int i = 0; i < n; i++ ){
        string s;
        cin>>s;
        two.push_back(s);
    }
    vector<pair<string,string>> partners;

    for(int i = 0; i < n; i++ ){
        pair<string,string> par;
        par.first = one[i];
        par.second = two[i];
        partners.push_back(par);
    }
    bool d = true;
    for(int i = 0 ; i < partners.size(); i++){
        pair<string,string> par = partners[i];
        if(par.first.compare(par.second)==0){
            d = false;
            break;
        }
        for(int j = i+1; j < partners.size();j++){
            pair<string,string> par1 = partners[j];
            if(par.first.compare(par1.second)==0){
                if(par.second.compare(par1.first)!=0){
                    d = false;
                    break;
                }
            }
        }
        if(d==false){
            break;
        }
    }

    if(d==false){
        cout<<"bad";
    } else {
        cout<<"good";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
