    #include <bits/stdc++.h>
    using namespace std;
    void solve(){
        int j, a;
        cin>>j>>a;
        char s, r1;
        int r2 = 0;
        int max = 0;
        vector<char> size;
        char hi[3] = {'S', 'M','L'};
        for(int i = 0 ; i<j; i++){
            cin>>s;
            size.push_back(s);
        }
        vector<char> req;
        vector<int> num;
        for(int k = 0; k<a;k++){ 
            cin>>r1;
            req.push_back(r1);
            cin>>r2;
            num.push_back(r2);
        }
        for(int j = 0; j<a;j++){
            char a = req[j];
            int x = 0;
            if(a=='M'){
                x=1;
            } else if(a=='L'){
                x=2;
            }
            int b = num[j];
            if(x==0){
                if(size[b-1]==hi[0]||size[b-1]==hi[1]||size[b-1]==hi[2]){
                max++;
                size[b-1]= ' ';
            } 
            } else if (x==1){
                if(size[b-1]==a||size[b-1]==hi[2]){
                max++;
                size[b-1]= ' ';
            }
            } else if(x==2){
                if(size[b-1]==hi[2]){
                max++;
                size[b-1]= ' ';
            }
            }
            
        }
    cout<<max; 
        

    }
    
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;

    }
