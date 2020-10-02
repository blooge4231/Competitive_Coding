#include <bits/stdc++.h>
using namespace std;
void solve(){
    int p, g, r, o, n, c;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>p>>g>>r>>o>>n;
    int min = INT_MAX;
    c = 0;
    for(int i = 0; i<=n/p;i++){
        for(int j = 0; j<= n/g;j++){
            for(int k = 0; k<= n/r;k++){
                for(int s = 0; s<= n/o;s++){
                    if(i*p+j*g+k*r+s*o==n){
                        if(min > i+j+k+s){
                            min = (i+j+k+s);
                        }
                        cout<<"# of PINK is "<< i << " # of GREEN is "<<j << " # of RED is "<< k << " # of ORANGE is "<<s<< '\n';
                        c++;
                    }
                }
            }
        }
    
 }
    cout<< "Total combinations is "<<c << "."<<'\n';
    cout<< "Minimum number of tickets to print is "<< min << ".";
}
int main(){
    solve();
    return 0;
}
