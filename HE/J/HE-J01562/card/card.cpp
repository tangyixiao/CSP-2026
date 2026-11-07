#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    long long n,m;
    cin>>n>>m;
    long long a[n];
    for(int i=1;i<=n;i++)
    {
        int k;
        if(a[i]==k&&a[n]!=k)
        {
            a[i]=a[n-1];
        }
    }
    return 0;
}
