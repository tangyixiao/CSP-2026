#include<iostream>
#include<algorithm>
using namespace std;

int n,m;
int a[200005];

int dfs(int c,int cnt)
{
    if(cnt==0)
    {
        // cout<<a[c]<<"1 ";
        return a[c];
    }
    int mx=0;
    for(int i=c+1;i<n-cnt+1;i++)
    {
        int x=a[i] & dfs(i,cnt-1);
        // cout<<x<<" ";    
        if(mx<x)
        {
            mx=x;
        }
    }

    // cout<<mx<<"\n";
    return mx;
}

int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<dfs(0,m);
    return 0;
}