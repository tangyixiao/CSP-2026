#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;cin>>n;
    vector<long long>a(n);
    string s;
    vector<long long>e(n,1);
    string ss;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>ss[i];
        if(a[i]>1000)
        {
            e[i]=a[i];
            a[i]=1;
        }
        for(int j=1;j<=a[i];j++)
        {
            s+=ss[i];
        }
    }
    long long sum=0;
    int j=n-1;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=s[j])
        {
            sum+=e[i];
            s[j]=s[i];
        }
        j--;
    }
    cout<<sum;
    return 0;
}