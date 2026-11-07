#include<bits/stdc++.h>
using namespace std;
int n,m,sz,s[500005],ans[300005],z=0,have[300005],answer[300005];
int main(){
	freopen(string.in,"w",stdin);
	freopen(string.out,"r",stdout);
	cin >> n >> m;
	for(int i = 1;i<=n;i++)
	{
		cin >> sz;
		s[i] = sz;
	}
	for(int i = 1;i<=n;i++)
	{
		for(int j = i;j<=n;j++)
		{
			ans[++z]=s[i];
			have[s[i]]++;
			if(have[s[i]]>=2)
			{
				z--;
				have[s[i]]--;
				while(ans[z]!=s[i])
				{
					z--;
					have[ans[z]]--;
				}
			}
		}
		for(int k = 1;k<=m;k++)
		{
			if(have[k]==1)
			{
				answer[k]++;
				have[k]=0;
			}
		}
	}
	for(int i = 1;i<=m;i++)
	{
		cout << answer[i] << " ";
	}
	return 0;
} 