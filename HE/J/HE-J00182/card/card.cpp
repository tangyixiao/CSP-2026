#include<bits/stdc++.h>
using namespace std;
int a[500005],f[500005],t[300005];
void solve(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            f[j]=0;
        }
        for(int j=i;j<=n;j++){
            int w=0;
            for(int q=i;q<j;q++){
                if(a[q]==a[j]&&f[q])w=1;
                if(w)f[q]=0;
            }
            f[j]=1;
        }
        for(int j=i;j<=n;j++){
            if(f[j])t[a[j]]++;
        }
    }
    for(int i=1;i<=m;i++){
        cout<<t[i]<<" ";
    }
}
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
