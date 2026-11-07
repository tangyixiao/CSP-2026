#include <bits/stdc++.h>

using namespace std;

int n,a[200005],cnt,len;
char c[200005];

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	stack<char> s1,s2;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i] >> c[i];
		len += a[i];
	}
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= a[i];j++)
		{
			s1.push(c[i]);
			cnt++;
			if(cnt >= len / 2)
			{
				break;
			}
		}
		if(cnt >= len / 2)
		{
			break;
		}
	}
	cnt = len;
	for(int i = n;i >= 1;i++)
	{
		for(int j = 1;j <= a[i];j++)
		{
			s2.push(c[i]);
			cnt--;
			if(cnt <= len / 2)
			{
				break;
			}
		}
		if(cnt <= len / 2)
		{
			break;
		}
	}
	int i = 0,j = len;
	cnt = 0;
	while(!s1.empty() && !s2.empty())
	{
		if(s1.top() != s2.top())
		{
			cnt++;
		}
		s1.pop(),s2.pop();
	}
	cout << cnt;
	return 0;
}