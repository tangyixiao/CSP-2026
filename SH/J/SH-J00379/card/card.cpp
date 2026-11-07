#include<bits/stdc++.h>
using namespace std;

const int MAXN=2e5+5;
int a[MAXN];
int ans[MAXN];
bool tb[MAXN];
stack<int> st;
int n,m;

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		while(!st.empty()) st.pop();
		memset(tb,0,sizeof(tb));
		for(int j=i;j<=n;j++)
		{
			if(tb[a[j]])
			{
				while(st.top()!=a[j]) st.pop();
			}
			else
			{
				st.push(a[j]);
				tb[a[j]]=true;
			}
		}
		while(!st.empty())
		{
			ans[st.top()]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<' ';
	}
	return 0;
}
