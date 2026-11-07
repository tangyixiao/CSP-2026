#include<bits/stdc++.h>
using namespace std;
int a[200005];
char s[200005];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    long long ans=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];cin>>s[i];
    }
    int l=1,r=n;
    while(l<r)
    {
        long long c;
        if(a[l]<a[r])c=a[l];
        else c=a[r];
        if(s[l]!=s[r])
        {

            ans=c+ans;
        }
        a[l]-=c;
        a[r]-=c;
        if(a[l]==0)l++;
        if(a[r]==0)r--;

    }
    cout<<ans;
    return 0;
}
