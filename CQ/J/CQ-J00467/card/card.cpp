#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int >
#define pll pair<long long ,long long >

using namespace std;
const int N=500005;
int n,m,ans[N];
int arr[N],nxt[N],siz[N],ed[N];
vector<int >ve[N];
bitset<N>flg;
void dfs(int x){
    siz[x]=1;
    int tag=0;
    if(!flg[arr[x]]){
        flg[arr[x]]=1;
        tag=1;
    }
    for(auto i:ve[x]){
        dfs(i);
        siz[x]+=siz[i];
    }
    ans[arr[x]]+=siz[x]*tag;
    if(tag){
        flg[arr[x]]=0;
    }
}
void sol(){//
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        cin>>arr[i];
        ed[arr[i]]=i;
    }
    /*
    sort(ed+1,ed+m+1,[](pii a,pii b){
        return a.first>b.first;
    });*/

    for(int i=n;i>=1;--i){
        if(nxt[arr[i]]){
            ve[ed[arr[i]]+1].push_back(i);
            //cout<<nxt[arr[i]]+1<<' '<<i<<'\n';
        }
        else{
            ve[i+1].push_back(i);
            //cout<<i+1<<' '<<i<<'\n';
        }
        nxt[arr[i]]=i;
    }
    dfs(n+1);
    for(int i=1;i<=m;++i){
        cout<<ans[i];
        if(i!=m)cout<<" ";
    }




}
signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    
    int t=1,c;
    //cin>>t;
    //cin>>c;
    while(t--){
        sol();
    }
    //cerr<<'\n'<<clock()<<'\n';
    return 0;
}
/*
author:_aa_
考虑复用之前的信息，操作可以建树
今年怎么和去年一样简单，好吧t4脑抽想了1h,差点被黄题打败
10:00AK
Trick or Treat!


*/