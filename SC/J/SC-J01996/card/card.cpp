#include<bits/stdc++.h>
using namespace std;
int f(vector<int>x,int y)
{
    for(int i=0;i<x.size();i++)
    {
        if(x[i]==y) return i;
    }
    return -1;
}
int main()
{
    //freopen("card.in","r",stdin);
    //freopen("card.out","w",stdout);
    int n,m;cin>>n>>m;
    vector<int>v(n),cnt(n),ans(n),count(m,0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            if(f(cnt,v[j])!=-1)
            {
                int k=f(cnt,v[j]);
                for(int z=0;z<k;z++)
                    ans[z]=cnt[z];
                cnt.clear();
                if(k!=0)
                {
                    for(int z=0;z<k;z++)
                    {
                        cnt[z]=ans[z];
                    }
                }
                cnt.push_back(v[j]);
            }
            else
                cnt.push_back(v[j]);
        }
        for(int j=1;j<=m;j++)
        {
            for(int z=0;z<cnt.size();z++)
            {
                if(cnt[z]==j)
                    count[j-1]++;
            }
        }
    }
    for(int i=0;i<m;i++)
        cout<<count[i]<<" ";
    return 0;
}
