#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("and.in","W",stdin);
    freopen("and.out","r",stdout);
int n,a[1005],m,o;
cin>>n>>m;
for(int i=1;i<=n;i++)
{
    cin>>a[i];
}
for(int i=1;i<+m;i++)
{
    o+=a[i];
}
cout<<o<<endl;
    return 0;
}

