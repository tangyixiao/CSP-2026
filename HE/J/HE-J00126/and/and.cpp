#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
const int N=2e5+5;
int x[N],n,k,sum,temp,maxn;
void dfs(int step,int now)
{
	if(step==k+1)
	{
		maxn=max(maxn,sum);
		return;
	}
	for(int i=now+1;i<=n;i++)
	{
		temp=sum;
		sum&=x[i];
		dfs(step+1,i);
		sum=temp;
	}
	return;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int mmm=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>x[i];
		mmm=max(x[i],mmm);
	}
	if(k==1)
	{
		cout<<mmm;
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		sum=x[i];
		dfs(2,i);
	}
	cout<<maxn;
	fclose(stdin);	
	return 0;
}
