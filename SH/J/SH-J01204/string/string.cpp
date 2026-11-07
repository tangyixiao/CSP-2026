#include <bits/stdc++.h>
using namespace std;
long long n,a[200005],ans;
string s[200005];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>s[i];
    }
    long long i=1,j=n;
    while(i<j)
    {
        while(a[i]>=a[j])
        {
            if(s[i]!=s[j])
            {
                ans+=a[j];
            }
            a[i]-=a[j];
            j--;
        }
        a[j]-=a[i];
        if(s[j]!=s[i])
        {
            ans+=a[i];
        }
        i++;
    }
    cout<<ans;
}
