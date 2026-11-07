#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010];
bool usd[300010];
int ans[300010];
stack<int> st;
void play()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(usd[a[j]]!=1)
			{
				st.push(a[j]);
				usd[a[j]]=1;
			}
			else
			{
				while(st.top()!=a[j])
				{
					usd[st.top()]=0;
					st.pop();
				}
			}
		}
		while(!st.empty())
		{
			ans[st.top()]++;
			usd[st.top()]=0;
			st.pop();
		}
	}
}

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
	play();
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<' ';
	}
	return 0;
}