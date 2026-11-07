#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    string x,y;
    cin>>n>>x>>m>>y;
    if(n!=m){
        cout<<"0000";
    }else{
        cout<<1;
        if((x[0]-'0')*10+(x[1]-'0')!=(y[0]-'0')*10+(y[1]-'0')){
            cout<<"000";
        }else{
            cout<<1;
            if(x[2]-'A'<=2&&y[2]-'A'<=2||x[2]-'A'>=3&&y[2]-'A'>=3){
                cout<<1;
                if(abs(x[2]-y[2])==1){
                    cout<<1;
                }else{
                    cout<<0;
                }
            }else{
                cout<<"00";
            }
        }
    }
}
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
