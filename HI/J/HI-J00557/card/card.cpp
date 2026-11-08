#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],t[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	for(int i=1;i<=n;i++)
	{
		bool o[300005]={},b[500005]={};
		for(int j=i;j<=n;j++)
		{
			if(o[a[j]]==1)
			{
				int k=j-1;
				while(b[k]!=a[j]){b[k]=-1;k--;}
			}
			else
			{
				b[j]=a[j];
				o[a[j]]=1;
			}
			
		}
		for(int j=1;j<=n;j++)
		{
			t[b[i]]++;
		}
	}
	for(int i=1;i<=m;i++)cout << t[i] << ' ';
	return 0;
}
