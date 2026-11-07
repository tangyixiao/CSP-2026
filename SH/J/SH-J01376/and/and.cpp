#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+5;
int m,n,ans;

struct node
{
	int p,l;
}a[N];

bool cmp(const node& m,const node& n)
{
	return m.p > n.p;
}

int cal(int n)
{
	int ans = 0;
	while (n >= pow(2,ans))
	{
		ans++;
	}
	return ans;
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i].p;
		a[i].l = cal(a[i].p);
	}
	
	sort(a+1,a+n+1,cmp);
	while (a[m].l < a[1].l)
	{
		int v = a[1].l,i = 1;
		while (a[i].l == v)
		{
			a[i].p -= pow(2,v-1);
			a[i].l = cal(a[i].p);
			i++;
		}
		sort(a+1,a+n+1,cmp);
	}
	
	ans = a[1].p;
	for (int i = 2;i <= m;i++)
	{
		ans = ans & a[i].p;
	}
	cout << ans;
	
	return 0;
}
