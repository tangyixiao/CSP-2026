#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	string s = "";
	for (int i = 0;i < n;i++)
	{
		int a;
		char c;
		cin >> a >> c;
		for (int j = 0;j < a;j++)
		{
			s += c;
		}
	}
	bool flag = true;
	for (int i = 0;i < s.length() / 2;i++)
	{
		if (s[i] != s[s.length() - 1 - i])
		{
			flag = false;
		}
	}
	if (flag == true)
	{
		cout << 0;
		return 0;
	}
	long long ans = 0;
	for (int i = 0;i < s.length() / 2;i++)
	{
		if (s[i] != s[s.length() - 1 - i])
		{
			ans++;
		}
	}
	cout << ans;
	return 0;
}
