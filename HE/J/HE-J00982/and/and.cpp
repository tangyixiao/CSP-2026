#include <bits/stdc++.h>
using namespace std;
long long a[200005],b[200005];
int n, m;
int check(long long x)
{
	int cnt = 0;
	while(x != 0)
	{
		x /= 2;
		cnt++;
	}
	cnt--;
	return cnt;
};
bool cmp(long long x,long long y)
{
	return x > y;
}
int main()
{
	freopen("and5.in","r",stdin);
	freopen("and5.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++) cin >> a[i];
	sort(a+1,a+n+1,cmp);
	for(int i = 1;i <= n;i++) b[i] = check(a[i]);
	long long maxn = 0;
	for(int i = 1;i <= n - m;i++)
	{
		long long sum = a[i];
		for(int j = 1;j < m;j++)
		{
			sum = (sum & a[i+j]);
		}
		maxn = max(sum,maxn);
	}
	cout << maxn;
	return 0;
}
