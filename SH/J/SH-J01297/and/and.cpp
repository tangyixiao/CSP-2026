#include <bits/stdc++.h>
using namespace std;
long long n,m,mx=0,cmp,zhong;
int a[25][25],v[25],ji2[25][25],ji1;
int ten[25];
void dfs(int x,int sum,int cnt)
{
	if (cnt==m)
	{
		//mx=max(mx,sum);
		return;
	}
	dfs(x+1,sum,cnt);
	v[x]=1;
	
	for (int i=1;i<=25;i++)
	{
		ji2[x][i]=a[x][i];
		if (a[x][i]==1&&a[x+1][i]==1)//同为一
		{
			a[x][i]==1;
		}
		else a[x][i]==0;
	}
	cmp=1;
	ji1=sum;
	for (int i=1;i<=n;i++)
	{
		zhong=a[x][i];
		for (int j=1;j<=cmp;j++)
			zhong=zhong*2;
		sum+=zhong;
	}
	cout<<sum<<'\n';
	//算sum 
	dfs(x+1,sum,cnt++);
	v[x]=0;
	sum=ji1;
	for (int i=1;i<=25;i++)
	{
		a[x][i]=ji2[x][i];
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(1+1==3)//(n<=20)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>ten[i];
			int j=1;
			while(ten[i]!=0)
			{
				a[i][j]=ten[i]%2;//vector中的2进制是反的
				ten[i]=ten[i]/2;
				j++;
			}
		}
		dfs(1,0,0);
		cout<<mx;
	}
	if (m==1)
	{
		for (int i=1;i<=n;i++)
		{
			cin>>ten[i];
			if (ten[i]>mx) mx=ten[i];
		}
		cout<<mx;
	}
	else{
		for (int i=1;i<=n;i++)
		{
			cin>>ten[i];
			if (ten[i]>mx) mx=ten[i];
		}
		cout<<"0";
	}
	return 0;
}
