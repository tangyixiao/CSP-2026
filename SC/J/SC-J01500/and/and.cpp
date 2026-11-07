#include<bits/stdc++.h>
using namespace std;
int a[200005];
string t[200005];
int cnt = 0;
void twoj(int a)
{
	char c[31];
	int i = 1;
	while(a)
	{
		c[i] = cnt % 2;
		cnt /= 2;
	}	
	for (int j = i; j >= 1; i--)
	{
		t[++cnt] += c[i]; 
	}
}
int yu(int m)
{
	for (int i = 1; i <= m; i++)
	{
		twoj(a[i]);
	}
	string s = t[1];
	for (int i = 2; i < m; i++)
	{
		for (int j = 0; j < t[i].size(); j++)
		{
			if (s[j] == t[i][j])
			{
				s[j] == 1;
			}
			else
			{
				s[j] == 0;
			}
		}
	}
	int g;
	int bei = 1;
	for (int i = 0; i < s.size(); i++)
	{
		g += (s[i] - '0') * bei;
		bei *= 10;
	}
	return g;
}
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int mn = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	cout << yu(m);
	return 0;
}