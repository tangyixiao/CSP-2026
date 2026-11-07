#include <bits/stdc++.h>
using namespace std;
string s;
long long l, num1, num2;
long long a[100000005];
int n;
int main()
{
	freopen("srting.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		char c = '0';
		cin >> a[i];
		cin >> c;
		for (long long j = 1; j <= a[i]; j++)
		{
			l++;
			s[l] = c;	
		}
	}
	for (long long i = 1; i <= l; i++)
	{
		if (s[i] == s[l - i + 1])
		{
			num1++;
			continue;
		}
		else
		{
			num2++;
			continue;
		}
	}
	if (num1 == l)
	{
		cout << 0;
		return 0;
	}
	else
	{
		if (num2 % 2 == 0) cout << num2 / 2;
		else cout << num2 / 2 + 1; 
	}
	return 0;
}