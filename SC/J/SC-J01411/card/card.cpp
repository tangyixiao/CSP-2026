#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int n,m,a[N];
bool f[N];
int ans[N];
int anss;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		memset(f,0,sizeof(f));
		stack<int> stk;
		for(int j=i+1;j<=n;j++)
		{
			if(f[a[j]])
			{
				while(stk.top()!=a[j])
				{
					f[stk.top()]=0;
					stk.pop();
				}
			}
			else
			{
				stk.push(a[j]);
				f[a[j]]=1;
			}
		}
		while(!stk.empty())
		{
			ans[stk.top()]++;
			stk.pop();
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<' ';
	}
	return 0;
}