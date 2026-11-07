#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string C1,Ss1,C2,Ss2;
    cin>>C1>>Ss1>>C2>>Ss2;
        if(C1[0]!=C2[0]||C1[1]!=C2[1]){
            cout<<"0000";
        }else if(Ss1[0]!=Ss2[0]&&Ss1[1]!=Ss2[1]){
            cout<<"1000";
        }else if(!((Ss1[2]<='C'&&Ss2[2]<='C')||(Ss1[2]>='D'&&Ss2[2]>='D'))){
            cout<<"1100";
        }else if((Ss1[2]=='C'&&Ss2[2]=='A')||(Ss1[2]=='a'&&Ss2[2]=='c')){
            cout<<"1110";
        }else{
            cout<<"1111";
        }
    return 0;
}
