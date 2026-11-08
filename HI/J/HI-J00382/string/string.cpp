#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int a[N];
char c[N];
long long sum = 0,tot = 0,ans = 0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	for (int i = 1;i<= n;i++)
	{
		cin >> a[i] >> c[i];
		sum += a[i];
	}
	long long t = 0;
	int id =0;
	for (int i = 1;i<=n;i++)
	{
		t+=a[i];
		if(t >= sum)	id = i;
	}
	int l = 1,r = n;
	while(tot <= sum / 2)
	{
		if(a[r] >= a[l] && c[r] != c[l])
		{
			ans += a[l];
			a[r] -= a[l];
			l++;
			tot += a[l];
			if(a[r] - a[l] == 0)	r--;
		}
		else if(a[r] >= a[l] && c[r] == c[l])
		{
			a[r] -= a[l];
			l++;
			tot += a[l];
			if(a[r] - a[l] == 0)	r--;
		}
		else if(a[l] >= a[r] && c[l] != c[r])
		{
			ans += a[r];
			a[l] -= a[r];
			r--;
			if(a[l] - a[r] == 0)	l++;
		}
		else if(a[l] >= a[r] && c[l] == c[r])
		{
			a[l] -= a[r];
			if(a[l] - a[r] == 0)	l++;
			r--;
		}
	}
	
	cout << ans;
	return 0; 
}
