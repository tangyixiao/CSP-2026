#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);

    string xLine,xIdx,yLine,yIdx;
    cin>>xLine>>xIdx>>yLine>>yIdx;

    string ans="";
    if(xLine==yLine){
        ans+="1";

        if(xIdx.substr(0,2)==yIdx.substr(0,2)){
            ans+="1";

            if(('A'<=xIdx[2] && xIdx[2]<='C') && ('A'<=yIdx[2] && yIdx[2]<='C') ||
               ('D'<=xIdx[2] && xIdx[2]<='F') && ('D'<=yIdx[2] && yIdx[2]<='F') ){
                ans+="1";

                if(xIdx[2]<yIdx[2] && yIdx[2]-xIdx[2]==1){
                    ans+="1";
                }else if(yIdx[2]<xIdx[2] && xIdx[2]-yIdx[2]==1){
                    ans+="1";
                }else{
                    ans+="0";
                }
            }else{
                ans+="00";
            }
        }else{
            ans+="000";
        }
    }else{
        ans="0000";
    }

    cout<<ans;

    return 0;
}
