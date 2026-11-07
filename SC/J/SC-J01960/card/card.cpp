#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

long long n,m,a[500005],times[300005];
bool vis[500005],pl[300005];

int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;

    if(m==1){
        cout<<n;
    }else{
        for(long long i=1;i<=n;i++){
            cin>>a[i];
        }
        for(long long i=1;i<=n;i++){
            memset(vis,false,sizeof(vis));
            memset(pl,false,sizeof(pl));
            for(long long j=i;j<=n;j++){
                for(long long k=i;k<j;k++){
                    if(a[k]==a[j]){
                        for(long long p=k;p<j;p++){
                            vis[a[p]]=false;
                        }
                    }
                    break;
                }
                vis[a[j]]=true;
            }
            for(long long j=1;j<=n;j++){
                if(vis[a[j]] && !pl[a[j]]){
                    times[a[j]]+=(vis[a[j]]);
                    pl[a[j]]=true;
                }
            }
        }
        for(long long i=1;i<=m;i++){
            cout<<times[i]<<" ";
        }
    }
    return 0;
}