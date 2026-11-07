#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,cnt = 0;
	string s;
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		int ai;
		char ci;
		cin >> ai >> ci;
		for(int j = 1;j <= ai;j++)
		{
			s += ci;
		}
	}
	for(int i = 0;i <= s.size() / 2 - 1;i++)
	{
		if(s[i] != s[s.size() - i - 1])
		{
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
