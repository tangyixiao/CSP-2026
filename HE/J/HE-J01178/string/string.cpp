#include <bits/stdc++.h>

using namespace std;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n,f;
    int cnt=0;
    int ans=0;
    cin >> n;
    char l,d;
    char a[2000005];
    for(int i=1;i<=n;i++)
    {
        cin>>f >> l;
        if(f==cnt && l==d)
        {
            ans+=f;
            continue;
        }
        for(int j=cnt;j<=cnt+f;j++)
            a[j]=l;
        cnt+=f;
        d=l;
    }
    for(int i=0;i<=cnt;i++)
    {
        if(a[i]==a[cnt-i])
            continue;
        else
        {
            ans++;
        }
    }
    cout << ans/2;
    return 0;
}
