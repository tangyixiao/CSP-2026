#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,ans=0,a[N],b[M],c[N];
stack<int> st;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	memset(c,-1,sizeof(c));
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int j=1;j<=n;j++)
	{
		memset(b,0,sizeof(b));
		for(int i=j;i<=n;i++)
		{
			if(b[a[i]]==0)
			{
				st.push(a[i]);
				b[a[i]]=1;
			}else{
				while(st.top()!=a[i])
				{
					b[st.top()]=0;
					st.pop();
				}
			}
		}
		while(!st.empty())
		{
			int x=st.top();
			c[x]++;
			st.pop();
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(c[i]!=-1)
		{
			cout<<c[i]+1<<" ";
		}
	}
	return 0;
} 
