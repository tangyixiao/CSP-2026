#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int N = 500010;
const int M = 300010;

int n, m;
int a[N];
ll cnt[M];
int c[M];

ll s1c[M];
void solveA()
{
	for (int i = 1; i <= n; ++i)
	{
		s1c[a[i]]++;
	}
	for (int i = 1; i <= m; ++i)
	{
		s1c[i] += s1c[i - 1];
		cout << s1c[i];
		if (i != m)
			cout << " ";
	}
	return;
}

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin.tie(0)->sync_with_stdio(false);
	
	cin >> n >> m;
	
	bool inc = true;
	
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		if (a[i] < a[i - 1])
			inc = false;
	}
	
	if (inc)
	{
		solveA();
		return 0;
	}
	
	for (int i = 1; i <= n; ++i)
	{
		ll sz = 0;
//		cout << i << ": " << endl;
		for (int j = i; j <= n; ++j)
		{
			int cur = a[j];
			auto pos = find(c, c + sz, cur) - c;
//			cout << "cur,pos,sz: " << cur << " " << pos << " " << sz << endl;
			if (pos >= sz)
			{
				c[sz] = cur;
				++sz;
			}
			else
			{
				sz = pos + 1;
			}
			
//			for (int j = 0; j < sz; ++j)
//			{
//				cout << c[j] << " ";
//			}
//			cout << endl;
		}
		
		for (int j = 0; j < sz; ++j)
		{
			++cnt[c[j]];
//			cout << c[j] << " ";
		}
//		cout << endl;
	}
	
	for (int i = 1; i <= m; ++i)
	{
		cout << cnt[i];
		if (i != m)
			cout << " ";
	}
	cout << endl;
	
	return 0;
}
 
