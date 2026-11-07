#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string a;
	long long sum=0;
	for (int i=1;i<=n;i++)
	{
		long long c;
		char d;
		cin>>c>>d;
		for (int i=1;i<=c;i++) a+=d;
		sum+=c;
	}
	long long ans=0;
	for (int i=0;i<=sum/2;i++)
	{
		if (a[i]!=a[sum-i-1]) ans++;
	}
	cout<<ans;
}