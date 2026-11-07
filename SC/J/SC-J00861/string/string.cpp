#include <iostream>
#include <string>
using namespace std;
struct HW
{
	long long a;
	char c;
};
HW hw[1000005];
string s;
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, len = 0, cnt = 0;
	cin >> n;
	for (long long i = 1; i <= n; i++)
	{
		long long x;
		char y;
		cin >> x >> y;
		hw[i].a = x, hw[i].c = y;
	}
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = 1; j <= hw[i].a; j++)
		{
			s += hw[i].c;
		}
		len += hw[i].a;
	}
	for (long long i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
		{
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}