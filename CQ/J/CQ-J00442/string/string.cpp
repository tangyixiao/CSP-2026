#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

int a, b, c, d, e, f, g[N], h[N];

string s, s1;

bool mm,nn;

long long p;

char k[N], m[N];

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> a;
	for(int i = 1; i <= a; i ++)
	{
		cin >> g[i] >> k[i];
		if(g[i] > 50) 
		{
			mm = 1;
//			cout << 'p';
		}
		h[a + 1 - i] = g[i];
		m[a + 1 - i] = k[i];
		p += g[i]; 
		if(g[i] % 2 == 1) f = f ^ 1;
	}
	if(a == 1)
	{
		cout << 0;
		return 0;
	}
	if(a == 2)
	{
		if(k[1] == k[2]) cout << 0;
		else cout << min(g[1], g[2]);
		return 0;
	}
	if(mm == 0)
	{
//		cout << 'o';
		long long ans = 0;
		for(int i = 1; i <= a; i ++) 
		{
			for(int j = 1; j <= g[i]; j ++) s += k[i];
		}
		long long len = s.size();
		for(int i = 0; i < len / 2; i ++) if(s[i] != s[len - 1 - i]) ans ++;
		cout << ans;
		return 0;
	} 
	if(f == 1)
	{
		long long l = 1, r = 1, sum = 0, q = 0;
		while(l <= a && r <= a && q < (p - 1) / 2)
		{
//				cout << m[l] << ' ' << m[r] << '\n';
			if(k[l] == m[r])
			{
				if(g[l] <= h[r])
				{
					h[r] -= g[l];
					q += g[l];
					l ++;
					if(h[r] == 0) r ++;	
				}
				else 
				{
					g[l] -= h[r];
					r ++;
					q += h[r];
				}
			}
			else 
			{
				if(g[l] <= h[r])
				{
					h[r] -= g[l];
					l ++;
					if(h[r] == 0) r ++;	
					sum += g[l];
					q += g[l];
				}
				else 
				{
					g[l] -= h[r];
					r ++;
					sum += h[r];
					q += h[r];
				}
			}
//			cout << l << ' ' << r << ' ' << q << '\n';
		}
		cout << sum;
	}
	else
	{
		long long l = 1, r = 1, sum = 0, q = 0;
		while(l <= a && r <= a && q < p / 2)
		{
			if(k[l] == m[r])
			{
				if(g[l] <= h[r])
				{
					h[r] -= g[l];
					l ++;
					if(h[r] == 0) r ++;	q += g[l];
				}
				else 
				{
					g[l] -= h[r];q += h[r];
					r ++;
				}
			}
			else 
			{
				if(g[l] <= h[r])
				{
					h[r] -= g[l];
					l ++;
					if(h[r] == 0) r ++;	q += g[l];
					sum += g[l];
				}
				else 
				{
					g[l] -= h[r];
					r ++;
					sum += h[r];q += h[r];
				}
			}
//			cout << l << ' ' << r << ' ' << q << '\n';
		}
		cout << sum;
	}
	return 0;
}

