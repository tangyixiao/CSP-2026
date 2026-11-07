#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[500005],ans[500005];
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	for(int i=1;i<=n;i++)
	{
		stack <int> s;
		bool l[500005]={0};
		memset(l,0,sizeof(l));
		for(int j=i;j<=n;j++)
		{
			if(l[a[j]])
			{	
				while(1)
				{
					l[s.top()]=0;
					if(s.top()==a[j])
					{
						s.pop();
						l[a[j]]=0;
						break;
					}
					s.pop();
				}
			}
			s.push(a[j]);
			l[a[j]]=1;
		}
		while(!s.empty())
		{
			ans[s.top()]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout << ans[i] << " ";
	}
	return 0;
}
