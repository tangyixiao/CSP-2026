#include<bits/stdc++.h>
using namespace std;
int a[500005],box[300005],r[500005],z[300005],d[300005];//a:yuan ka pai box:chu xian shu r:zhuo shang ka pai z:zhuo shand ka pai shu d:zhuo shang wei zhi
int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int s=1;s<=n;s++)
    {
        int cur=n;
        for(int i=1;i<=n;i++)
        {
            r[i]=a[i];
            z[r[i]]++;
            if(d[r[i]]==0)d[r[i]]=i;
        }
        for(int i=s;i<=n;i++)
        {
            if(z[a[i]]==0)
            {
                cur++;
                r[cur]=a[i];
                z[a[i]]++;
                d[a[i]]=cur;
            }
            else
            {
                for(int j=d[a[i]];j<=cur;j++)
                {
                    z[r[j]]--;
                }
                z[a[i]]++;
                cur=d[a[i]];
            }
        }
        for(int i=1;i<=cur;i++)
        {
            box[r[i]]++;
            cout<<r[i]<<" ";
        }
        cout<<endl;

    }
    for(int i=1;i<=m;i++)
    {
        cout<<box[i]<<" ";
    }
    return 0;
}
