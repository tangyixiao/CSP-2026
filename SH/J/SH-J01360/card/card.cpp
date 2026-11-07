#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[500005],last[500005],ans[300005];
int s[300005];//i的个数 

int main()
{
	freopen("card.in" , "r" , stdin);
	freopen("card.out" , "w" , stdout);
	
	cin >> n >> m;
	for (int i = 1 ; i <= n ; i++)
		cin >> a[i];
		
	for (int i = 1 ; i <= n-1 ; i++)//从第i张开始翻
	{
		memset(s , 0 , sizeof(s));
		memset(last , 0 , sizeof(last));
		for (int j = i ; j <= n ; j++)//第几张牌 
		{
			if (last[a[j]] != 0)
			{
				for (int k = last[a[j]] ; k <= j-1 ; k++)
				{
					s[a[k]] = max(0,s[a[k]]-1);
					last[a[k]] = 0;
				}
				last[a[j]] = j;
			}
			else last[a[j]] = j;
			s[a[j]]++;
		}
		//cout << s[a[m]] << endl;
		for (int j = 1 ; j <= m ; j++)
		{
			if (s[a[j]] != 0)
				ans[j]++;
		}
	}
	
	for (int i = 1 ; i <= m-1 ; i++)
		cout << ans[i] << " ";
	cout << ans[m]+1;
	
	return 0;
}
