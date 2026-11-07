#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m,a[40];
    cin>>n>>m;
    string sum;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    t=s[i];
    while(t/2>1)
    {
        sum+=t%2;
        t=s[i]/2;
    }
    sort(sum.begin(),sum.end());
    reverse(sum.begin(),sum.end());
    cout<<s.substr(1,sum[i/2]);
    return 0;
}
