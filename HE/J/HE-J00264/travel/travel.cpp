#include <bits/stdc++.h>
using namespace std;
string cxy,zwy,cxe,zwe,z,zz;
void solve(){
    cin>>cxy>>zwy>>cxe>>zwe;
    z=zwy[0]+zwy[1];
    zz=zwe[0]+zwe[1];
    if(cxy==cxe){
        cout<<1;
        if(z==zz){
            cout<<1;
            if((zwy[2]>='A'&&zwy[2]<='C')&&(zwe[2]>='A'&&zwe[2]<='C')||(zwy[2]=='D'||zwy[2]=='F')&&(zwe[2]=='D'||zwe[2]=='F')){
                cout<<1;
                if((zwy[2]+1)==zwe[2]||(zwy[2]-1)==zwe[2]){
                    cout<<1;
                }else if((zwy[2]=='D'||zwy[2]=='F')&&(zwe[2]=='D'||zwe[2]=='F')){
                    cout<<1;
                }else{
                    cout<<0;
                }
            }else{
                for(int i=1;i<=2;i++){
                    cout<<0;
                }
            }
        }else{
            for(int i=1;i<=3;i++){
                cout<<0;
            }
        }
    }else{
        for(int i=1;i<=4;i++){
            cout<<0;
        }
    }


}
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    while(t--){
        solve();
    }
    return 0;
}
