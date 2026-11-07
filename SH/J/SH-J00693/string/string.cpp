#include <bits/stdc++.h>
using namespace std;
int a[200005],ch[200005];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n,i=1,j;
    long long sum=0,ans=0;
    char x;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i]>>x;
        ch[i]=x-'a';
    }
    j=n;
    while(i<j)
    {
        if(ch[i]==ch[j])
        {
            if(a[i]>a[j])
            {
                a[i]-=a[j];
                j--;
            }
            else if(a[i]<a[j])
            {
                a[j]-=a[i];
                i++;
            }
            else if(a[i]==a[j])
            {
                j--;
                i++;
            }
        }
        else
        {
            if(a[i]>a[j])
            {
                ans+=a[j];
                a[i]-=a[j];
                j--;
            }
            else if(a[i]<a[j])
            {
                ans+=a[i];
                a[j]-=a[i];
                i++;
            }
            else if(a[i]==a[j])
            {
                ans+=a[i];
                j--;
                i++;
            }

        }
    }
    cout<<ans;
    return 0;
}
