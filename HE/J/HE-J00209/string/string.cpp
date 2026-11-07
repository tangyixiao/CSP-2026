#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n,m,x=0,gs=0;
    char a[20000],s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m>>s;
        for(int j=0;j<m;j++)
        {
            a[x]=s;
            x++;
        }
    }
    if(x%2==0)
    {
        for(int i=0;i<x/2;i++)
        {
            if(a[i]!=a[x-1-i])
            {
                gs++;
            }
        }
    }
    else
    {
        for(int i=0;i<x/2;i++)
        {
            if(a[i]!=a[x-1-i])
            {
                gs++;
            }
        }
    }
    cout<<gs;
    return 0;
}
