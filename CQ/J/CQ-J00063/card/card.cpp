#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;
int a[500001],nxt[300001],ans[300001],to[500001];
bool flag[500001];
int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=n;i>=1;i--)
    {
        //cout<<i<<endl;
        to[i]=nxt[a[i]];
        if(nxt[a[i]]!=0)
        {
            for(int j=i;j<=n;j++)flag[j]=0;
            for(int j=i;j<=n;j++)
            {
                //cout<<j<<endl;
                if(!flag[j]&&to[j]!=0)
                {
                    for(int k=j;k<to[j];k++)flag[k]=1;
                    //cout<<j<<" "<<to[j]<<endl;
                    j=to[j]-1;
                }
            }
            //cout<<endl;
        }
        for(int j=i;j<=n;j++)if(flag[j]==0)ans[a[j]]++;
        //for(int j=i;j<=n;j++)cout<<flag[j];
        //cout<<endl;
        nxt[a[i]]=i;
    }
    for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
    return 0;
}
