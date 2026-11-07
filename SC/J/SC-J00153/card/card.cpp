#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[500005];
struct node
{
	int x,id=0;
};
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		vector<int> cur(n+1);
		for(int j=i;j<=n;j++)
		{
			vector<int> cur2;
			cur.push_back(a[j]);
			for(int k=0;k<cur.size();k++)
			{
				if(a[j]==cur[k])
				{
					cur2.push_back(a[j]);
					break;
				}
				cur2.push_back(cur[k]);
			}
			cur=cur2;
		}
		for(int i=0;i<cur.size();i++)
		{
			ans[cur[i]]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}