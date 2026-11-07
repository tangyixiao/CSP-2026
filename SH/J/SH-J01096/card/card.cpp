#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[500010];
int howm[300010];
int firstt[300010];
int ans[300010];

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
		string t;
		memset(howm,0,sizeof(howm));
		for(int j=i;j<=n;j++)
		{
			t=t+char(a[j]+'0');
			howm[a[j]]++;
			if(howm[a[j]]==2)
			{
				for(int z=firstt[a[j]];z<t.size();z++)
				{
					howm[a[z]]--;
				}
				int w=t.size();
				t.erase(firstt[a[j]]-1,w-firstt[a[j]]);
			}
			if(howm[a[j]]==1)
			{
				firstt[a[j]]=t.size();
			}
		}
		for(int z=0;z<t.size();z++)
		{
			ans[int(t[z]-'0')]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<' ';
	}
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
