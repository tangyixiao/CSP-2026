#include<bits/stdc++.h>
using namespace std;
int a1,b1;
string a2,b2;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>a1>>a2>>b1>>b2;
    int nng=a2[2]-'A'+1,hmc=b2[2]-'A'+1;
    if(a1==b1){
        cout<<1;
        if(a2[0]==b2[0]&&a2[1]==b2[1]){
            cout<<1;
        }
        else{
            cout<<0;
        }
        if(a2[0]==b2[0]&&a2[1]==b2[1]&&(nng<=3&&hmc<=3)||(nng<=5&&hmc<=5&&nng>3&&hmc>3)){
            cout<<1;
            if(max(nng,hmc)-min(nng,hmc)==1){
                cout<<1;
                return 0;
            }
        }
        else{
            cout<<0;
        }
        cout<<0;
    }
    else{
        cout<<0;
        cout<<0;
        cout<<0;
        cout<<0;
    }
    return 0;
}
