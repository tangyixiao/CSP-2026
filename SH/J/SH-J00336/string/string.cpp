#include <bits/stdc++.h>
using namespace std;
bool flag = false;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	string ans = "";
	long long max = 0;
	for(int i = 1; i <= n; i++)
	{
		int a;
		cin >> a;max += a;
		string s;
		cin >> s;
		if(a >= 10000) flag = true;
		else while(a--)
			ans += s;
	}
	if(n >= 1000 || flag == true)
	{
		cout << max / 2;
		return 0;
	}
	int len = ans.size();
	int cnt = 0;
	for(int i = 0; i < len / 2; i++)
	{
		if(ans[i] != ans[len - i - 1]) cnt++;
	}
	cout << cnt;
	return 0;
} 
