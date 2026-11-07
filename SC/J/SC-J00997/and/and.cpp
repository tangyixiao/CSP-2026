#include<bits/stdc++.h>
#define int long long
using namespace std;
int nm=1,zl;
vector<vector<int>> g(555555);
bitset<30> bt;
void f(int ax,int b)
{
    if(ax>=29)
        return ;
    if(bt[ax]==1)
    {
        if(g[b][2]==-1)
        {
            g[++nm]={1,-1,-1,zl,b};
            g[b][2]=nm;
            f(ax+1,g[b][2]);
        }
        else
        {
            g[b][0]++;
//            cout<<g[b][2]<<'\n';
            f(ax+1,g[b][2]);
        }
    }
     else
     {
         if(g[b][1]==-1)
         {
             g[++nm]={1,-1,-1,zl,b};
             g[b][1]=nm;
             f(ax+1,g[b][1]);
         }
         else
         {
             g[b][0]++;
             f(ax+1,g[b][1]);
         }
     }
    return ;
}
void up(int ax)
{
    if(g[ax][4]!=-1)
    {
        g[g[ax][4]][0]=0;
        if(g[g[ax][4]][1]!=-1)
            g[g[ax][4]][0]+=g[g[g[ax][4]][1]][0];
        if(g[g[ax][4]][2]!=-1)
            g[g[ax][4]][0]+=g[g[g[ax][4]][2]][0];
        if(g[g[ax][4]][0]==0)
            g[g[ax][4]][1]=g[g[ax][4]][2]=-1;
        up(g[ax][4]);
    }
    return ;
}
int f1(int ax,int b)
{
     if(ax>=28)
     {
         if(g[b][2]!=-1)
         {
             if(g[g[b][2]][0]==1)
                 g[b][2]=-1;
             g[g[b][2]][0]--;
             int z=g[g[b][2]][3];
             up(g[b][2]);
             return z;
         }
         else
         {
             if(g[b][1]!=-1)
             {
                 if(g[g[b][1]][0]==1)
                     g[b][1]=-1;
                 g[g[b][1]][0]--;
                 int z=g[g[b][1]][3];
                 up(g[b][1]);
                 return z;
             }
         }
     }
     if(g[b][2]!=-1)
         return f1(ax+1,g[b][2]);
     else
         return f1(ax+1,g[b][1]);
}
signed main()
{
     freopen("and.in","r",stdin);
     freopen("and.out","w",stdout);
     ios::sync_with_stdio(0);
     cin.tie(0); cout.tie(0);
    int n,m,z=(1LL<<30)-1,zl=(1LL<<30)-1;
    cin>>n>>m;
    g[0]={n,-1,-1,0,-1};
    for(int x=0;x<n;x++)
    {
        cin>>zl;
        bt=zl;
        f(0,0);
    }
     for(int x=0;x<m;x++)
         z&=f1(0,0);
    cout<<z;
    cout<<'\n';
    return 0;
}