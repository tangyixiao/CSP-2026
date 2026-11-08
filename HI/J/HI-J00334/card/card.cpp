#include <bits/stdc++.h>
using namespace std;
int a[500005];
stack<int>st;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	for (int i=1;i<=n;i++) 
	{
		cin>>a[i];	
	}
	for (int i=1;i<=n;i++)
	{
		for (int j=i;j<=n;j++)
		{
			if(st.find(a[j])==st.end()) st.insert(a[j]);
			else 
			{
				while (1)
				{
					st.pop();
					if (st.top()==k) break;
				}
			}
		}
	}
	return 0;
}
