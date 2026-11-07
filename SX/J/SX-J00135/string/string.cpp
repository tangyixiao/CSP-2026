#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=2e5+5;
ll n,a[N],s[N],tot,ans;
char c[N];
string t="0";

int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i]>>c[i];
        tot+=a[i];
        for(int j=1; j<=a[i]; j++)
        {
            t+=c[i];
        }
    }
    for(int i=1; i<=tot/2; i++)
    {
        if(t[i]!=t[tot-i+1])
            ans++;
    }
    cout<<ans;
    return 0;
}
