#include <iostream>
using namespace std;

int main() {
    int time;
    string places[5] = {"Victoria", "Edmonton", "Winnipeg", "Toronto", "Halifax" };
    cin >> time;
    cout << time << " in Ottawa" << endl;
    for(int i = 0; i<5;i++){
    if(time-(300-(i*100))<0){
        cout << 2100+(i*100)+time << " in " << places[i]<< endl;
    } else if (time-(300-(i*100)) == 2400) {
        cout << "0" << " in " << places[i] << endl;
    } else if(time-(300-(i*100))>2400){
        cout << (time-(300-(i*100)))-2400 << " in " << places[i]<<endl;
    }
    else {
        cout << time-(300-(i*100))<< " in "<< places[i] << endl;  
     }
     
    }
    int found = time+130;
    if(found%100>=60){
        cout<<time+170 << " in St. John's"<<endl;
    }
    else if(time+130>2400){
        cout << time+2270 << " in St. John's"<<endl; 
    } else if(time+130 == 2400){
        cout << "0"<< " in St. John's"<< endl;
    }
     else{
        cout << time+130 << " in St. John's"<< endl;
    }
  
    return 0;
}
