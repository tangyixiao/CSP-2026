#include<bits/stdc++.h>
using namespace std;
int ans[10];
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string seatR,seatX;
    string trainR,trainX;
    cin>>trainR>>seatR;
    cin>>trainX>>seatX;
    if(trainR==trainX){
        ans[1]=1;
        if(seatR[0]==seatX[0]&&seatR[1]==seatX[1]){
            ans[2]=1;
            if((seatR[2]<='C'&&seatX[2]<='C')||(seatR[2]>'C'&&seatX[2]>'C')){
                ans[3]=1;
                if(abs(seatR[2]-seatX[2])==1||(seatR[2]=='D'&&seatX[2]=='F')||(seatR[2]=='F'&&seatX[2]=='D')){
                    ans[4]=1;
                }
            }
        }
    }for(int i=1;i<=4;i++)cout<<ans[i];
    return 0;
}