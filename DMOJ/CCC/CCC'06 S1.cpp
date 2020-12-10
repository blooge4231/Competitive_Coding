#include <bits/stdc++.h>
using namespace std;
void solve(){
    string f1, f2;
    cin>>f1>>f2;
    map<char,int> map1, map2;
    map<char,bool> alleles;
    int n;
    cin>>n;
    for(int i = 0; i<f1.length();i++){
        map1[f1[i]]++;
        map2[f2[i]]++;
    }

    for(char a = 'A', b ='a'; a<='E'&&b<='e';a++,b++){
            if(map1[a]+map2[a]>0){
                alleles[a] = true;
            }
            if(map1[b]>0&&map2[b]>0){
                alleles[b] = true;
            }    
        }
    

    for(int k = 0; k<n; k++){
        string s;
        bool print = false;
        cin>>s;
        for(int c = 0; c<s.length();c++){
            if(alleles[s[c]]==false){
                cout<<"Not their baby!"<<endl;
                print = true;
                break;
            }
        }
        if(print == false){
            cout<<"Possible baby."<<endl;
        }

    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
