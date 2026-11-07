#include<bits/stdc++.h>
using namespace std;

int a[200010], n, m;
int ans;
void dfs(int sum, int num, int x)
{
	if(x > n)
	{
		if(num == m) ans = max(ans, sum);
		return ;
	}
	dfs(sum & a[x], num+1, x+1);
	dfs(sum, num, x+1);
}
void suba()
{
	int p = pow(2, 30);
	p--;
	//cout << p;
	dfs(p, 0, 1);
	cout << ans;
}
void subb()
{
	for(int i = 1; i <= n; i++)
	{
		ans = max(a[i], ans);
	}
	cout << ans;
} 
void subc()
{
	for(int i = 1; i < n; i++)
	{
		for(int j = i+1; j <= n; j++)
		{
			ans = max(ans, a[i]&a[j]);
		}
	}
	cout << ans;
}
void subd()
{
	ans = a[1];
	for(int i = 2; i <= n; i++) 
	{
		ans &= a[i];
	}
	cout << ans;
}
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i<= n; i++)
	{
		cin >> a[i];
	}
	if(n <= 20)
		suba();
	else if(m == 1)
		subb();
	else if(m == 2)
		subc();
	else
		subd();
	
} 
