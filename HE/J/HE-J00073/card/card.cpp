#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
int n,m,a[maxn],cnt[maxn];
bool box[maxn];
stack<int> q; 
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	for(int i=1;i<=n;i++)
	{
		memset(box,0,sizeof box);
		for(int j=i;j<=n;j++)
		{
			if(box[a[j]]==true)
			{
				while(q.top()!=a[j])
				{
					q.pop();
				}
				q.pop();
			}
			q.push(a[j]);
			box[a[j]]=true;
		}
		while(!q.empty())
		{
			cnt[q.top()]++;
			q.pop();
		}
	}
	for(int i=1;i<=m;i++)cout << cnt[i] << ' ';
	return 0;
}
