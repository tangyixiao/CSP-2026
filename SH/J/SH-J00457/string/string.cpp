#include <bits/stdc++.h>
using namespace std;

//long long a[30];

int main()
{
	freopen(string.in, "r", stdin);
	freopen(string.out, "w", stdout);
	int n;
	cin >> n;
	//long long total;
	string s = "";
	for (int i = 1; i <= n; i++)
	{
		int num;
		string op;
		cin >> num >> op;
		for (int j = 1; j <= num; j++) s = s + op;
		//a[(op[0] - 'a' + 1) * 1] += num;
		//total += num;
		/*
		if (total % 2 == 0 && a[(op - 'a' + 1) * 1] >= (total / 2))
		{
			cout << (total - a[(op - 'a' + 1) * 1]) << endl;
			return 0;
		}
		else if (a[(op - 'a' + 1) * 1] > (total / 2))
		{
			cout << (total - a[(op - 'a' + 1) * 1]) << endl;
			return 0;
		}
		*/
	}
	long long ans = 0;
	string s1, s2;
	s1 = s2 = "";
	for (int i = 0; i < (s.size() / 2); i++)
	{
		s1 = s1 + s[i];
		s2 = s2 + s[s.size() - i - 1];
	}
	//cout << s << " " << s1 << " " << s2 << endl;
	for (int i = 0; i < max(s1.size(), s2.size()); i++)
	{
		if (s1[i] != s2[i]) ans++;
	}
	cout << ans << endl;
	return 0;
} 
