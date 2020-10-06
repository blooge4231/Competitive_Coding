  #include <bits/stdc++.h>
    using namespace std;
    
    void solve(){
        string n;
        int w = 0; 
        vector<string> list;
        vector<int> temp;
        while(true){
            cin>>n;
            list.push_back(n);
            cin>>w;
            temp.push_back(w);
            if(n.compare("Waterloo")==0){
                break;
            }
           
        }
        
        int a = 0;
        for(int i = 1 ; i<temp.size();i++){
              if(temp[i]<temp[a]){
                   a = i;
               }       
        }
        cout<<list[a];

    }

    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }
