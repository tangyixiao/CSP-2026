#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005];
int main()
{
//	/*
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
//	*/
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		stack<int> st;
		vector<int> b(n+5);
		for(int j=i+1;j<=n;j++)
		{
			while(b[j])
			{
				b[st.top()]--;
				st.pop();
			}
			st.push(a[j]);
			b[a[j]]++;
		}
		if(b[i])
			ans[i]++; 
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<' ';
	}
	return 0;
}
