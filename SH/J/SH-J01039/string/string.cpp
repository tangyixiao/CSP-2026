#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 200010;
int n;
int a[N] = {};
char t[N] = {};
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	int ans = 0;
	memset(a,n+1,0);
	for (int i=1;i<=n;i++)
	{
		cin>>a[i]>>t[i];
	}
	int end = 0;
	if (n%2==0)end = n/2;
	else end = (n+1)/2;
	int i=1;
	int j=n;
	while (i!=j)
	{
		if (t[i] == t[j])//字符串为回文的
		{
			if (a[i]<a[j])
			{
				a[j]-=a[i];
				i++;
			}
			else if (a[i]==a[j])
			{
				i++;
				j--;
			}
			else
			{
				a[i]-=a[j];
				j--;
			}
		}
		else if (t[i]!=t[j])//不是回文的
		{
			if (a[i]<a[j])
			{
				ans+=a[i];
				a[j]-=a[i];
				i++;
			}
			else if (a[i]==a[j])
			{
				ans+=a[i];
				i++;
				j--;
			}
			else
			{
				ans+=a[j];
				a[i]-=a[j];
				j--;
			}
		}
	}
	cout<<ans;
	return 0;
}
