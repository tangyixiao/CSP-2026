#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 2e5+10;
ll n,m,a[N],x=-1e9,b[N];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(m==2)
		for(int i=2;i<=n;i++)
			x=max(a[i-1]^a[i],x);
	else if(m==1)
		for(int i=1;i<=n;i++)
			x=max(a[i],x);
	else
	{
		b[1]=a[1];
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				b[j]=b[j]^a[j+1];
				x=max(x,b[i]);
			}
			
		}
		cout<<x/4;
	}
	return 0;
}
