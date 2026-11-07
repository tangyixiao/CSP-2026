#include<bits/stdc++.h>
using namespace std;
int a[500005],n,m;
string box[300005],p;
bool b[300005];
int cnt[300005];
void check(string q)
{
    for(int i=1;i<=m;i++)
    {
        b[i]=0;
    }
    for(int i=0;i<q.size();i++)
    {
        b[q[i]]=1;
    }
}
int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            if(!b[j])
            {
                p+=a[j];
                box[a[j]]=p;
                b[a[j]]=1;
            }
            else
            {
                p=box[a[j]];
                check(p);
            }
        }
        for(int j=1;j<=m;j++)
        {
            if(b[j]) cnt[j]++;
        }
    }
    for(int i=1;i<=m;i++)
    {
        cout<<cnt[i]<<" ";
    }
    return 0;
}
