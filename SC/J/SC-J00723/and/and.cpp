#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long a[N],n,m,ans,del[N];
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int k=30;k>=0;k--){
        int res=0;
        for(int i=1;i<=n;i++){
            if(del[i])continue;
            if((a[i]>>k)&1){
                res++;
            }
        }
        if(res>=m){
            ans+=(1<<k);
            for(int i=1;i<=n;i++){
                if(del[i])continue;
                if(!((a[i]>>k)&1)){
                    del[i]=1;
                }
            }
        }
    }
    cout<<ans;
    return 0;
}