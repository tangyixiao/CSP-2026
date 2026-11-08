#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a,cnt = 0;
	string b,c;
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		cin >> a >> b;
		for(int j = 1;j <= a;j++)
		{
			c += b;
		}
	}
	int l = c.size();
	for(int i = 0;i < l / 2;i++)
	{
		if(c[0] != c[l - 1 - i])
		{
			cnt += 1;
		}
	}
	cout << cnt;
	return 0;
 } 
