#include<bits/stdc++.h>
using namespace std;
const int Nax = 5e5+5;
int N,M;
int A[Nax+5];
int cnt[Nax+5];
int ans[Nax+5];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&N,&M);
	for(int i = 1;i <= N;i++) scanf("%d",A+i);
	if(N > 1e4)
	{
		for(int i = 1;i <= N;i++)
			ans[A[i]] = i;
		for(int i = 1;i <= M;i++)
			printf("%d ",ans[i]);
		return 0;
	}
	for(int i = 1;i <= N;i++)
	{
		stack<int> sta;
		for(int j = 1;j <= M;j++) cnt[j] = 0;
		for(int j = i;j <= N;j++)
		{
			if(cnt[A[j]])
			{
				while(sta.size() && sta.top() != A[j])
				{
					int t = sta.top();
					cnt[t]--;
					sta.pop();
				}
				int t = sta.top();
				cnt[t]--;
				sta.pop();
			}
			cnt[A[j]]++;
			sta.push(A[j]);
		}
		for(int j = 1;j <= M;j++) if(cnt[j]) ans[j]++;
	}
	for(int j = 1;j <= M;j++) cout << ans[j] << ' ';
	return 0;
}