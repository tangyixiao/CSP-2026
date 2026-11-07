#include<bits/stdc++.h>
using namespace std;
long long a[200010];
char c[200010];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long ans = 0;
	cin >> n;
	int l = 1,r = n;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i] >> c[i];
	}
	while(l < r)
	{
		if(c[l] == c[r]) 
		{
			int sub = min(a[l],a[r]);
			a[l] = a[l] - sub;
			a[r] = a[r] - sub;
			if(a[l] == 0) l++;
			if(a[r] == 0) r--;
		}
		else
		{
			int sub = min(a[l],a[r]);
			ans += sub;
			a[l] = a[l] - sub;
			a[r] = a[r] - sub;
			if(a[l] == 0) l++;
			if(a[r] == 0) r--;
		}
	}
	cout << ans;
	return 0;
}
