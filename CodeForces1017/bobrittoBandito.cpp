#include<iostream>
using namespace std;
int main()
{
    int n,m,l,r;
    cin>>n>>m>>l>>r;
    int leftP=0;
    int rightP=0;
    int cnt=0;
    bool flag=0;
    while(cnt!=m){
        if(flag==0){
            if(l<leftP){
                leftP--;
                cnt++;
                
            }
        }
        if(flag==1){
            if(r>rightP){
                rightP++;
                cnt++;
            }
        }
        flag=!flag;
    }
    cout<<leftP<<" "<<rightP;
 return 0;
}