#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int ans;
	int a[n+5];
	char b[n+5];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	int d;
	for(int i=1;i<=n;i++)
	{
		if(b[i]==b[i+1])
			d=1;
		else
		{
			break;
		}
	}
	if(d==1)
	{
		ans=0;
	}
	else
	{
		ans=max(a[1],a[2]);
	} 
	cout<<ans;
	return 0;
}
