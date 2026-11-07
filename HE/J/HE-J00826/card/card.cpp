#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
bool at[200005];
int am[200005];
int ad[200005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	int cnt=1;
	for(int i=1;i<=n;i++)
	{
		int x;
		int ncnt=0;
		cin >> x;
		if(at[x]==1) 
		{
			for(int j=am[x];j<=cnt;j++)
			{
				a[j]=0;
				at[j]=0;
				ncnt++;
			}
			am[x]=cnt;
			at[x]=1;
			cnt-=ncnt;
		}else
		{
			at[x]=1;
			am[x]=cnt;
		}
		a[cnt]=x;
		for(int c=1;c<=m;c++)
		{
			if(at[c]) ad[c]++;
		}
		cnt++;
	}
	for(int c=1;c<=m;c++)
	{
		cout << ad[c] << ' ';
	}
	 
	
	/*for(int i=1;i<=n;i++)
	{
		
	}*/
	return 0;
}
