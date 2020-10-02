#include <bits/stdc++.h>
using namespace std;
void space(int a, int t) {
      for(int j = 34-(2*t+a);j>=0;j-- ){
            cout<<" ";
        } 
        
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
char c;
int points = 0;
int totpoints=0;
int n = 0;
int t = 0;
cout << "Cards Dealt                   Points"<<'\n';
for(int i = 0; i<17; i++){
    cin>>c;
    if(c=='H'||c=='D'||c=='S'){
        if(n==0){
            points+=3;
            totpoints+=3;
        } else if (n==1){
            points+=2;
            totpoints+=2;
        } else if (n==2){
            points++;
            totpoints++;
        }
         if(c == 'H'){
            space(8, t);
        } else if( c == 'D'){
            space(5,t);
        } else if(c=='S'){
            space(6,t);
            
        }
        cout<<points<<'\n';
        if(c == 'H'){
            cout<<"Hearts";
        } else if( c == 'D'){
            cout<<"Diamonds";
        } else if(c=='S'){
            cout<<"Spades";
        }
        points=0;      
        n=0;
        t=0;
     } else if(c == 'A'){
        points+=4;
        totpoints+=4;
        cout<<' '<<c;
        n++;
        t++;
     } else if(c=='K'){
        points+=3;
        totpoints+=3;
        cout<<' '<<c;
        n++;   
        t++;
     } else if(c=='Q'){
        points+=2;
        totpoints+=2;
        cout<<' '<<c;
         n++;
         t++;
     } else if(c=='J'){
        points++;
        totpoints++;
        cout<<' '<<c;
         n++;
         t++;
     } else if(c=='C'){
         cout<<"Clubs";
     }
    else {
         cout<<' '<<c;
        n++;
        t++;
     }      
}
space(6,t);
 if(n==0){
    points+=3;
    totpoints+=3;
} else if (n==1){
  points+=2;
  totpoints+=2;
} else if (n==2){
  points++;
  totpoints++;
}
cout<<points<<'\n';
cout<<"                      Total "<<totpoints;

return 0;

}
