#include<bits/stdc++.h>
using namespace std;
int a[200005],c[200005];
long long b[200005][2000];
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","r",stdout);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        int j=0;
        while(a[i]>0)
        {
            a[i]%=2;
            b[i][2000-j]=a[i];
            j++;
        }
        c[i]=j;
    }
    while(n>0)
    {
        
    }
    
}