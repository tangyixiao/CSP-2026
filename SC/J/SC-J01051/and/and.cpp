
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,m;
ll a[100010];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	ll max=-10010;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(a[j]>a[i])
			{
				int x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		}
	}
	cout<<a[m];
	return 0;
}
