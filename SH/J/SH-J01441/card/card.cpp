#include<bits/stdc++.h>
using namespace std;

int n,m,a[500005],s[500005],ans[500005];
map<int,int>mp;

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
    	cin >> a[i];
	for(int i = 1; i <= n; i++)//n局 
	{
		for(int j = i; j <= n; j++)//出n张牌 
		{
			if(s[a[j]])//出过 
				for(int k = mp[a[j]]; k <= j-1; k++)//拿走所有右侧牌 
					s[a[k]]--;
			s[a[j]]++;//出牌 
			mp[a[j]] = j;//标记下标 
		}
		for(int p = 1; p <= m; p++)//记录 
		    if(s[p])
		        ans[p]++;
	}
	for(int i = 1; i <= m; i++)
	    cout << ans[i] << " ";
	return 0;
}
