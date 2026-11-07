#include<bits/stdc++.h>
using namespace std;
/*
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    cin>>n;
    vector<long long> a(n);
    vector<char> c(n);
    long long l1=1,r1=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>c[i];
        r1+=a[i];
        a[i]+=a[max(i-1,0)];
    }
    int l2=0,r2=n-1,n1=l1/2;
    long long ans=0;
    while(l1>r1&&l1<=n1&&r2>=n1)
    {
        if(c[l2]!=c[r2])
        {
            l1+=a[l2];
            r2-=a[l2];
            if()
        }
    }
    return 0;
}
*/
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    cin>>n;
    int n1=0;
    string s;
    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        n1+=tmp;
        char c;
        cin>>c;
        for(int j=0;j<tmp;j++)
        {
            s.push_back(c);
        }
    }
    int ans=0;
    for(int i=0;i<=n1/2;i++)
    {
        if(s[i]!=s[n1-1-i])
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}