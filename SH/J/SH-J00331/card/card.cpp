#include <iostream>
#include <vector>
using namespace std;
#define Maxn 500005
typedef long long ll;
int n, m;
ll a[Maxn];
ll ans[Maxn], r[Maxn], f[Maxn];
vector <int> v[Maxn];
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) 
	{
		cin >> a[i];
		r[a[i]] = i;
	}
	for (int i = n; i >= 1; i--)
	{
		if (i != r[a[i]])
		{
			f[r[a[i]]]++;
			v[i] = v[r[a[i]]];
		}
		else 
		{
			v[i] = v[i + 1];
			v[i].push_back(a[i]);
			f[i]++;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int x : v[r[i]])
			ans[x] += f[r[i]];
	}
	for (int i = 1; i <= m; i++) cout << ans[i] << ' ';
	return 0;
} 
//at 11:09 不管了慢速也算速，速通！
//坏了，样例6跑了1.74s，有点悬啊 
//简单题 黄 
//依旧红橙黄黄信心赛，今年别挂了 
