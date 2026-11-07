#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005];
bool vis[500005];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n>>m;
    for(int i=1;i<=n;++i){
        cin>>a[i];
    }

    for(int i=1;i<=n;++i){
        int l=i,r=i;
        vis[i]=true;
        for(int j=i+1;j<=n;++j){
            if(vis[a[i+1]]){
                
            }
        }
    }
}