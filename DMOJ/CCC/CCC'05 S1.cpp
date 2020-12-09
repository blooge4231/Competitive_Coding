#include <bits/stdc++.h>
#include <string>
using namespace std;
void solve(){
    int n;
    cin>>n;
    for(int i = 0; i <=n; i++){
        int nums = 10;
        string output = "", line;
        getline(cin,line);
        for(int k = 0; k< line.length() && nums>0; k++){
            char s = line.at(k);
            if(s=='-'){
                continue;
            }
            if(s<'A'){
                output+=s;
            } else if(s<'D'){
                output+='2';
            } else if(s<'G'){
                output+='3';
            } else if(s<'J'){
                output+='4';
            } else if(s<'M'){
                output+='5';
            } else if(s<'P'){
                output+= '6';
            } else if(s<'T'){
                output+='7';
            } else if(s<'W'){
                output+='8';
            } else {
                output+='9';
            }
            nums--;
            if(nums==7||nums==4){
                output+='-';
            }
        }
        cout<<output<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
