#include <bits/stdc++.h>
using namespace std;
long long n, a, sum;
string c, s;
long long h(string t, bool w = true)
{
	for (long long i = 0; i <= t.size(); i++)
	{
		if (t[i] != t[t.size() - i - 1])
		{
			w = false;	
		}
	}
	if (w == true)
	{
		return 1;
	}
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (long long i = 1; i <= n; i++)
	{
		cin >> a >> c;
		for (long long i = 1; i <= a; i++)
		{
			s += c;
		}
	}
	if (h(s) != true)
	{
		for (long long i = 1; i <= s.size(); i++)
		{
			if (s[i] != s[s.size() - i - 1])
			{
				s[i] = s[s.size() - i - 1];
				sum++;
			}
		}
	}
	cout << sum;
	return 0;	
} 

