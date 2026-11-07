#include <iostream>
#include <string>
using namespace std;
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	string huiwenchuan;
	int n;
	cin >> n;
	int ai;
	string a = "";
	string ci; 
	for (int i = 1; i <= n; i++)
	{
		cin >> ai >> ci;
		for (int j = 1; j <= ai; j++)
		{
			a = a + ci;
		}
	}
	int changdu =  a.length();
	int ans = 0;
	for (int k = 0; k <= changdu / 2; k++)
	{
		int s = changdu - k - 1;
		if (a[k] != a[s])
		{
			ans++;
		}
	}
	cout << ans;
	return 0;
}
