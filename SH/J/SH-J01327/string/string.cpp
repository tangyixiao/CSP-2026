#include <bits/stdc++.h>
using namespace std;
int a[500005],n,ans,r,l;
string b;
string w;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int z=0;
	int sum=0;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum+=a[i];
		cin>>b;
		for (int j=1;j<=a[i];j++)
		{
			w+=b;
		}
	}
	sum--;
	while (l!=sum && l!=sum-1)
	{
		if (w[l]!=w[sum])
		{
			ans++;
		}
		l++;
		sum--;
	}
	cout<<ans;
	return 0;
}
