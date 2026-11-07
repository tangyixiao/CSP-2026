#include<bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;
const int N=5e5+10;
int node[N],a[N],nend=0;
int n,m;
map<int,int>mp,app;
void nclear()
{
    nend=0;
}
int nfind(int x){
    for(int i=1;i<=nend;++i){
        if(node[i]==x){
            return i;
        }
    }
}
void nerase(int x)
{
    for(int i=nfind(x)+1;i<=nend;++i){
        mp[node[i]]=0;
    }
    nend=nfind(x);
    return;
}
void nadd(int x)
{
    node[++nend]=x;
    return;
}
vector<int> ntrav()
{
    vector<int>ret;
    for(int i=1; i<=nend; ++i)
    {
        ret.push_back(node[i]);
    }
    return ret;
}
void round(int x)
{
    nclear();
    mp.clear();
    for(int i=x; i<=n; ++i)
    {
        if(mp[a[i]])
        {
            nerase(a[i]);
        }
        else
        {
            mp[a[i]]=i;
            nadd(a[i]);
        }
    }
    vector<int>res=ntrav();
    for(int i=0;i<res.size();++i){
        app[res[i]]++;
    }
    return;
}
signed main()
{
    //56pts
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1; i<=n; ++i)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; ++i)
    {
        round(i);
    }
    for(int i=1; i<=m; ++i)
    {
        cout<<app[i]<<" ";
    }
    return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/


