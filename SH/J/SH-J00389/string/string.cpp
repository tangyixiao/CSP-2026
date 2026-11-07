#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

bool isPal(string s)
{
	string x = "";
	for (int i = s.size() - 1; i >= 0; i--)
	{
		x += s[i];
	}
	return x == s;
}

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	string s = "";
	for (int i = 1; i <= n; i++)
	{
		long long a;
		string c;
		cin >> a >> c;
		for (int j = 1; j <= a; j++) s += c;
	}
	if (isPal(s))
	{
		cout << 0 << endl;
		return 0;
	}
	long long ans = 0;
	for (long long i = 0; i < s.size() / 2; i++)
	{
		if (s.size() % 2 != 0 && i == (s.size() / 2 + 1)) continue;
		if (s[i] != s[s.size() - i - 1])
		{
			s[s.size() - i - 1] = s[i];
			ans++;
		}	
	}
	cout << ans << endl;
	return 0;
} 
