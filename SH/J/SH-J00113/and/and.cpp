#include<bits/stdc++.h>
using namespace std;
int a[200005][35];
int c[35],ans[35];
int n,m,cnt=0;
//按位与 
void an(int a[],int b[])
{
	int len=min(a[0],b[0]);
	c[0]=len;
	for(int i=1;i<=len;i++)
	{
		if(a[i]==1&&b[i]==1) c[i]=1;
		else c[i]=0;
	}			
}
//比较 
void p(int c[])
{
	bool flag=0;
	if(c[0]>ans[0])
	{
		for(int i=1;i<=c[0];i++)
			ans[i]=c[i];
		ans[0]=c[0];
	}
	else if(c[0]==ans[0])
	{
		for(int i=c[0];i>=1;i--)
		{
			if(c[i]>ans[i])
			{
				ans[i]=c[i];
				flag=1;
			}
			else if(flag||c[i]==ans[i]) continue;
			else break;
		}
	}	
}
//深搜全排列 
void dfs(int step,int w,int x[])
{
	if(step>m)
	{
		p(x);
		return ;
	}
	for(int i=w;i<=n-m+step;i++)
	{
		if(step==1)
		{
			x[0]=a[i][0];
			for(int j=1;j<=c[0];j++)
				x[j]=a[i][j];
			dfs(step+1,i+1,c);
		}
		else
		{
			an(a[i],x);
			dfs(step+1,i+1,x);
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >>n >> m;
	for(int i=1;i<=n;i++)
	{
		int x,p=0;
		cin >> x;
		while(x)
		{
			p++;
			a[i][p]=x%2;
			x/=2;
		}
		a[i][0]=p;
	}
	dfs(1,1,c);
	for(int i=c[0];i>=1;i--)
		cnt=cnt*2+ans[i];
	cout<< cnt;
	return 0;
}
