#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<double> streams;
    for(int i = 0; i<n;i++){
        double x;
        cin>>x;
        streams.push_back(x);
    }
    int in=0;
   while(in!=77){
        cin>>in;
        if(in==99){
                int a, b;
                cin>>a>>b;
                a--;
                double split = (double)b/100, right = 1-split, n = streams[a];
                streams[a]= n*split;
                streams.insert(streams.begin()+a+1, n*right);            
        }
        else if(in==88){
                int x;
                cin>>x;
                int y = x;
                x--;
                double t1 = streams[x], t2 = streams[y];
                    if(y>x){
                        streams.erase(streams.begin()+y);
                        streams[x]= t1+t2;
                    } else{
                        streams.erase(streams.begin()+x);
                        streams[y] = t1+t2;
                    }
                    
                    
                }
        }

        for(int i = 0; i<streams.size();i++){
            cout<<round(streams[i])<<" ";
        }

    }
   


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
