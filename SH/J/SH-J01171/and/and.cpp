#include <bits/stdc++.h>
using namespace std;
long long n,x,y1,y2,y3,sum;
long long p[300000];
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	cin>>n>>x;
	for(int i=1;i<=n;i++)
    {
    cin>>p[i];
    }sort(p+1,p+n+1);
    cout<<p[n];
    }
