#include<bits/stdc++.h>
using namespace std;
#define N 500020
int a[N];
int jishu[N];
string dp[N];
int ans[N];
int chongfu[N];
string its(int zz)  //有问题记得第一时间怀疑一下这个 
{
	string y = "";
	int z = zz;
	while(z != 0)
	{
		y = char((z%10)+48) + y;
		z /= 10;
	}
	return y;
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
		jishu[a[i]] = i;
	}
	for(int j = n;j >= 1;j--)
	{
		if(jishu[a[j]] == j)
		{
			dp[j] = its(a[j]) + " " + dp[j+1];
			chongfu[j]++;
		}
		else
		{
			dp[j] = dp[jishu[a[j]]];
			chongfu[jishu[a[j]]]++;
		}
	}
	
/*	for(int i = 1;i <= n;i++)
	{
		cout << dp[i] << endl;
	}*/
	
	for(int i = 1;i <= n;i++)
	{
	/*	int len = dp[i].size();
		string w = dp[i];
		int num = 0;
		for(int j = 0;j < len;j++)
		{
			if(w[j] != ' ')
			{
				num = num * 10 + int(w[j]) - 48;
			}
			else
			{
				ans[num]++;
				num = 0;
			}
		}*/
		if(chongfu[i] != 0)
		{
			int len = dp[i].size();
			string w = dp[i];
			int num = 0;
			for(int j = 0;j < len;j++)
			{
				if(w[j] != ' ')
				{
					num = num * 10 + int(w[j]) - 48;
				}
				else
				{
					ans[num] += chongfu[i];
					num = 0;
				}
			}
		}
	}
	for(int i = 1;i <= m;i++)
	{
		cout << ans[i] << " ";
	}
	return 0;
}
