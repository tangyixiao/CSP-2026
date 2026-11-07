#include <bits/stdc++.h>
using namespace std;
const int MAXN=5e5+7,MAXM=3e5+7;
int n,m;
int a[MAXN];
bool seen[MAXM];
int cnt[MAXM];
int main()
{
	ios::sync_with_stdio(false);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int l=n;l>=1;l--)
	{
		
		stack<int> im;
		for(int i=l;i<=n;i++)
		{
			if(seen[a[i]])
			while(!im.empty())
			{
				seen[im.top()]=0;
				if(im.top()==a[i])
				{
					im.pop();
					break;
				}
				else
					im.pop();
			}
			im.push(a[i]);
			seen[a[i]]=1;
		}
		while(!im.empty())
		{
			seen[im.top()]=0;
			cnt[im.top()]++;
			im.pop();
		}
		
	}
	for(int i=1;i<=m;i++)
		cout<<cnt[i]<<' ';
	return 0;
}
