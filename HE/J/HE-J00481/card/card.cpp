#include<bits/stdc++.h>
using namespace std;
int n,m,tot;
const int N=5e5+10;
int a[N],pai[N],ans[N],vis[N];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    if(n<=500&&m<=200){
        for(int i=1;i<=n;i++){
            memset(pai,0,sizeof(pai));
            memset(vis,0,sizeof(vis));
            tot=0;
            for(int j=i;j<=n;j++){
                for(int k=1;k<=tot;k++){
                    if(pai[k]==a[j]){
                        for(int l=1;l<=k;l++){
                            pai[l]=0;

                        }
                        for(int l=k+1;l<=tot;l++){
                            pai[l-k]=pai[l];
                            pai[l]=0;
                        }
                        tot-=k;
                        break;
                    }
                }
                tot++;
                pai[tot]=a[j];
            }
            for(int j=1;j<=tot;j++){
                if(vis[pai[j]]==0){
                    ans[pai[j]]++;
                    vis[pai[j]]=1;
                }
            }
        }
        for(int i=1;i<=m;i++){
            cout<<ans[i]<<' ';
        }
    }
}
