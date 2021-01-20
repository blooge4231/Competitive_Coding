#include <bits/stdc++.h>
using namespace std;
void solve(){
  
  int num = 91, s;
  
  for(int i = 0; i<3; i++){
      cin>>s;
      if(i==0||i==2){
          num+=s;
      } else if(i==1){
          num+=3*s;
      } 

  }
    cout<<"The 1-3-sum is "<<num;  
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
