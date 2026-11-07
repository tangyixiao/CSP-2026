#include <bits/stdc++.h>
using namespace std;
int n,cnt,cnt1,x,ans;
char y,a[200000005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	cnt=1;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>y;
		cnt1+=x;
		for(;cnt<=cnt1;cnt++)
			a[cnt]=y;
	}
	for(int i=1;i<=(cnt1/2);i++)
	{
		if(a[i]!=a[cnt1-i+1])
			ans++;
	}
	cout<<ans;
	return 0;
}