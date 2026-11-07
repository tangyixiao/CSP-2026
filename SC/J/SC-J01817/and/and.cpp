#include<bits/stdc++.h>
using namespace std;
int n,m,a[20000],maxn;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	maxn=a[1];
	for(int i=1;i<=n;i++)
	{
		if(&a[i]>&a[i+1])
		{
			maxn=a[i];
		}
		else
		{
			maxn=a[i+1];
		}
	}
	cout<<maxn;
	return 0;
}