#include<bits/stdc++.h>
using namespace std;
const int N=500500;
int n,m,a[N],t[N],ans[N];
stack<pair<int,int> >q;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(t[a[j]]>=1)
			{
				while(!q.empty()&&t[a[j]]>0)
				{
					t[q.top().first]--;
					q.pop();
				}
			}
			q.push({a[j],j});
			t[a[j]]++;
		}
		while(!q.empty())
		{
//			cout<<q.top().first<<' ';
			ans[q.top().first]++;
			t[q.top().first]=0;
			q.pop();
		}
//		cout<<'\n';
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<' '; 
	}
	
	return 0;
}
