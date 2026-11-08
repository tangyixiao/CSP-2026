#include <bits/stdc++.h>
using namespace std;
const int N=5*1e5+10,M=3*1e5+10;
stack<int> st;
int n,m,a[N],b[M];
bool f[M];
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
		memset(f,0,sizeof(f));
		for(int j=i;j<=n;j++)
		{
			if(f[a[j]]==0)
			{
				st.push(a[j]);
				f[a[j]]=1;
			}
			else
			{
				while(!st.empty() && st.top() != a[j])
				{
					st.pop();
				}
			}
		}
		while(!st.empty())
		{
			b[st.top()]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<b[i]<<' ';
	}
	cout<<'\n';
	fclose(stdin);
	fclose(stdout);
	return 0;
}

