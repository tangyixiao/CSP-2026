#include <bits/stdc++.h>
using namespace std;

int main ()
{
	freopen ("string.in" , "r" , stdin);
	freopen ("string.out" , "w" , stdout);
	int T;
	cin >> T;
	string ans = "";
	for (int i = 1;i <= T;i++)
	{
		int n;
		char s;
		cin >> n >> s;
		for (int i = 1;i <= n;i++)
		{
			ans += s;
		}
	}
	//cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << ans;
	long long cnt = 0;
	for (int i = 0;i <= ans.size () / 2;i++)
	{
		if (ans [i] != ans [ans.size () - 1 - i])
		{
			cnt++;
		}
		//cout << ans [i] << " " << ans [ans.size () - i - 1] <<endl;
	}
	cout << cnt;
	return 0;
} 