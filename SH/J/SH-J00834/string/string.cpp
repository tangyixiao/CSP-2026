#include<bits/stdc++.h>
using namespace std;
char t;
long long n,k,l;
long long s[100005],cnt = 0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	memset(s,-1,sizeof(s));
	cin>>n;
	for(int i = 1;i <= n;i ++)
	{
		cin>>k;
		cin>>t;
		for(int j = 1;j <= k;j ++)
		{
			int p = t - 'a' + 0;
			s[++cnt] = p;
		}
	}
	for(int i = 1;i <= 100005;i ++)
	{
		if(s[i] == -1)
		{
			l = i - 1;
			break;
		}
	}
	cnt = 0;
	if(l % 2 == 1)
	{
		long long x = l / 2 + 1;
		for(int i = x;i <= l;i ++)
		{
			if(s[i] == -1 || s[x * 2 - i] == -1)
			{
				break;
			}
			if(s[i] != s[x * 2 - i])
			{
				cnt ++;
			}
		}
	}
	else
	{
		long long y = l / 2 + 1;
		for(int i = y;i <= n;i ++)
		{
			if(s[i] == -1 || s[l + 1 - i] == -1)
			{
				break;
			}
			if(s[i] != s[l + 1 - i])
			{
				cnt ++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
