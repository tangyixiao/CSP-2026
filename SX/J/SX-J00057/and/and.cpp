#include <bits/stdc++.h>
using namespace std;
long long a[200005],sum=65535,flag=524288;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	long long maxn=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>maxn&&a[i]!=flag)
		{
			maxn=a[i];
		}
	}

	cout<<a[n-m];
	return 0;
}