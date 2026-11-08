#include<iostream>
#include<cstdio>
using namespace std;
int a[200001];
bool flag[200001];
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        flag[i]=1;
    }
    int ans=0;
    for(int i=29;i>=0;i--)
    {
        int cnt=0;
        for(int j=1;j<=n;j++)if(flag[j]&&((a[j]>>i)&1)==1)cnt++;
        if(cnt>=m)
        {
            ans+=(1<<i);
            for(int j=1;j<=n;j++)if(((a[j]>>i)&1)==0)flag[j]=0;
        }
    }
    cout<<ans<<endl;
    return 0;
}
