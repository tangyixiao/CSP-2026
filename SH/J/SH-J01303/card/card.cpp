#include<bits/stdc++.h>
using namespace std;
const int MAXN=5e5+10;
int n,m,ans;
int a[MAXN];
int vis[MAXN];
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
		vector<int>v(0,MAXN);
		int ok=0;
		for(int j=i;j<=n;j++)
		{
			for(int m=ok;m<=int(v.size())-1;m++)
			{
				if(a[j]==v[m])
				{
					ok=m;
					break;
				}
			}
			v.push_back(a[i]);
		}
		for(int kkk=ok;kkk>=0;kkk--)
		{
			vis[v[kkk]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<vis[i]<<" ";
	}
	cout<<"\n";
	return 0;
} 
