#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005],p[300005];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        cin>>a[i];
    }
    for(int i=1;i<=n;++i){
        for(int j=i;j<=n;++j){
            if(p[a[j]]!=0){
                for(int k=p[a[j]]+1;k<j;++k){
                    p[a[k]]=0;
                }
            }
            p[a[j]]=j;
        }
        for(int j=1;j<=m;++j){
            if(p[j]!=0){
                ++ans[j];
            }
            p[j]=0;
        }
    }
    for(int i=1;i<=m;++i){
        cout<<ans[i]<<" ";
    }
    return 0;
}
