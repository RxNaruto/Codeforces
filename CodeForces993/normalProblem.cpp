
#include <bits/stdc++.h>
using namespace std;
int main() {
       int t;
       cin>>t;
       while(t--){
        string s;
        cin>>s;
        string s2=s;
        reverse(s2.begin(),s2.end());
        for(int i=0;i<s.size();i++){
            if(s2[i]=='p'){
                s2[i]='q';
            }
            else if(s2[i]=='q'){
                s2[i]='p';
            }
            
        }
        cout<<s2<<endl;
        
       }
    

    return 0;
}