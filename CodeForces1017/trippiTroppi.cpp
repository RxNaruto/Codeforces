#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
     cin.ignore();
    vector<string>s(t);
    for(int i=0;i<t;i++){
        getline(cin,s[i]);
    }
        for(int k=0;k<t;k++){
            string st= s[k];
            int size = st.size();
            string newName ="";
            newName+=st[0];
            for(int i=1;i<size;i++){
               if(!(st[i]>='a' && st[i]<='z')){
                  if(st[i+1]>='a' && st[i+1]<='z'){
                    newName+=st[i+1];
                    i++;
                    }
                }
            }
        cout<<newName<<endl;
      
        }
        
    
    
    
}