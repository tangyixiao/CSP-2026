#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005];
long long cnt[500005];
long long cntt[500005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i = 1;i <= n;i++) cin>>a[i];
	for(int i = 1;i <= n;i++)
	{
		vector<long long>s;
		for(int j = 1;j <= m;j++) cntt[j] = 0;
		for(int j = i;j <= n;j++)
		{
			if(cntt[a[j]] > 0)
			{
				while(s[s.size() - 1] != a[j])
				{
					cntt[s[s.size() - 1]]--;
					s.pop_back();
				}
			}
			else
			{
				cntt[a[j]]++;
				s.push_back(a[j]);
			}
		}
		for(int j = 1;j <= m;j++)
		{
			cnt[j] += cntt[j];
		}
	}
	for(int i = 1;i <= m;i++)
	{
		cout<<cnt[i]<<" ";
	}
	return 0;
}
