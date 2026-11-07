#include<bits/stdc++.h>
using namespace std;
int n,m,cnt,a[500005],ans[300005],nega[300005],b[300005];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    if(n<=500){
        for(int i=1;i<=n;i++){
            memset(nega,0,sizeof(nega));
            memset(b,0,sizeof(b));
            cnt=0;
            for(int j=i;j<=n;j++){
                if(nega[a[j]]){
                    cnt=nega[a[j]]-1;
                    for(int k=nega[a[j]];k<=n;k++){
                        nega[b[k]]=0;
                        b[k]=0;
                    }
                }
                b[++cnt]=a[j];
                nega[a[j]]=cnt;
            }
            for(int j=1;j<=m;j++){
                ans[j]+=bool(nega[j]);
            }
        }
        for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
    }else{
        for(int i=1;i<=n;i++){
            ans[a[i]]=i;
        }
        for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
    }
    return 0;
}
unsigned long long int rp=-1;