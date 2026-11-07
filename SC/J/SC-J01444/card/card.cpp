#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
const int M=3e5+10;
int n,m;
int a[N];
long long c[N];
int past[M];
long long ans[N];
long long Start[N];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        past[a[i]]=i;
        Start[i]++;
    }
    for(int i=1;i<=n;i++){
        c[i]+=Start[i];
        c[past[a[i]]]-=Start[i];
        Start[past[a[i]]+1]+=Start[i];
    }
    for(int i=1;i<=n;i++){
        ans[i]=ans[i-1]+c[i];
    }
    for(int i=1;i<=n;i++){
        ans[i]=i-ans[i];
    }
    for(int i=1;i<=m;i++){
        cout<<ans[past[i]]<<' ';
    }
    cout<<'\n';
    return 0;
}