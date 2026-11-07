#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int> d(n,0);
    for(int i=0;i<n;i++)
    {
        for(int k=i+1;k<n;k++)
        {
            if(a[i]==a[k])
            {
                d[i]=k;
                break;
            }
        }
    }
    vector<int> ans(m,0);
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            ans[a[j]-1]++;
            if(d[j]!=0)
            {
                int t=j;
                while(d[j])
                {
                    j=d[j];
                }
                d[t]=j;
            }
        }
    }
    for(int i:ans)
    {
        cout<<i<<' ';
    }
    return 0;
}
