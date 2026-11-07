#include<bits/stdc++.h>
using namespace std;
long long a[200005],turemax,kkk,kk;
int n,m;
vector<int> q;
void dfs(int step,long long A_N_D,int ii)
{
	//cout<<step<<" "<<A_N_D<<" "<<ii<<" "<<a[ii]<<endl;
	if(step==m)
	{
		turemax=max(turemax,A_N_D);
		//cout<<endl;
		return;
	}
	for(int i=ii+1;i<=n;i++)
	{
		//cout<<a[i]<<endl;
		
		kkk++;
		if(kkk>1e8)
		{
			cout<<turemax<<endl;
			exit(0);
		}
		if(step==0)
		{
			dfs(step+1,a[i],i);
		}
		else
		{
			dfs(step+1,A_N_D&a[i],i);
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	long long sans=0,maxn=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		maxn=max(a[i],maxn);
		if(i==1)
		{
			sans=a[i];
		}
		else
		{
			sans&=a[i];
		}
	}
	if(m==n)
	{
		cout<<sans<<endl;
		return 0;
	}
	if(m==1)
	{
		cout<<maxn<<endl;
		return 0;
	}
	dfs(0,0,0);
	cout<<turemax<<endl;
	return 0;
}
