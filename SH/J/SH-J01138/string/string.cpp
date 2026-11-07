#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	string s,c;
	string ss;
	int n,a,cnt = 0;
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		cin >> a >> ss;
		for(int j = 1;j <= a;j++)
		{
			s.append(ss);
		}
	}
	for(int i = s.size() - 1;i >= 0;i--)
	{
		ss = s[i];
		c.append(ss);
	}
	if(s == c)
	{
		cout << 0;
		return 0;
	}
	a = s.size() / 2;
	for(int i = 0;i < a;i++)
	{
		if(s[i] != c[i])
		{
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
