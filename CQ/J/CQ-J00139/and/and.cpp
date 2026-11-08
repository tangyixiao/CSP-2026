#include <bits/stdc++.h>
using namespace std;
int a[10005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int s;
	for(int i=1;i<=n;i++)
	{
		while(a[i]>=0)
		{
			s=a[i]%2;
			a[i]/=2;	
		}
	}
	return 0;
}
