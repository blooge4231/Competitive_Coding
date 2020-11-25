            #include <bits/stdc++.h>
            using namespace std;
            
            void solve(){
                    string anagram, wild;
                    char ans = 'A';
                    cin>>anagram>>wild;
                    
                    map<char,int> anagram_occurence, wildcard_occurence;
                    for(int i = 0; i<anagram.length();i++){
                        anagram_occurence[anagram[i]]++;
                        wildcard_occurence[wild[i]]++;
                    }
                    int count = wildcard_occurence['*'];
                    for(int j = 'a'; j<='z';j++){
                        if(anagram.size()<wild.size()){
                            ans = 'N';
                            break;
                        }
                        if(anagram_occurence[j]!=wildcard_occurence[j]){
                            if(count>0){
                                count-=abs(anagram_occurence[j]-wildcard_occurence[j]);
                                if(count<0){
                                    ans='N';
                                    break;
                                }
                            } else {
                                ans = 'N';
                                break;
                            }
                        }
                    }
                
                    cout<<ans;
        
                    
            }
            
            int main(){
                ios::sync_with_stdio(0);
                cin.tie(0);
                solve();
                return 0;
            }
