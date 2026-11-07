#include<bits/stdc++.h>
using namespace std;
const int N=5e5+500;
int n,m,a[N],tg[N],bg[N],nxt[N],ct[N];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>n>>m;
    for(int i=1,l;i<=n;i++){
        cin>>a[i];
        if((l=tg[a[i]]))nxt[l]=i;
        else bg[a[i]]=i;
        tg[a[i]]=i;
    }
    for(int i=1;i<=n;i++){
        ct[i]++;
        if(nxt[i])ct[nxt[i]]+=ct[i],ct[i]=0;
        else ct[i+1]+=ct[i];
    }
    for(int i=1;i<=m;i++)cout<<ct[tg[i]]<<(" \n"[i==m]);
    cout.flush();
    return 0;
}