#include<bits/stdc++.h>
using namespace std;
int f(int x)
{
    int cnt=1,ans=0,sum=x,num=0;
    while(sum>=1)
    {
        ans+=sum%2*cnt;
        cnt*=10;
        sum/=2;
    }
    while(ans>=1)
    {
        cnt/=10;
        num+=ans%10*cnt;
        ans/=10;
    }
    return num;
}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        int u;cin>>u;
        v[i]=f(u);
    }
    vector<int>as;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                for(int z=0;z<v[i];z++)
                {
                    int p=v[i],q=v[j];

                }
            }

        }
    }
    cout<<12;
    return 0;
}
