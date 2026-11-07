#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int i,a[1000005];
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
   int n;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
   	cin>>a[i];
   }
   cout<<a[n-1];

return 0;
}
