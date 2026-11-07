#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+10;
unsigned long long n,m,ans;
unsigned long long num[MAXN];
unsigned long long chose[MAXN];
void dfs(int pos,int pre)
{
	if(pos==m+1)
	{
		int sum=chose[1];
		for(int i=2;i<=m;i++)
		{
			sum=sum&chose[i];
		}
		if(sum>ans)
		{
			ans=sum;
		}
		return;
	}
	for(int i=pre+1;i<=n;i++)
	{
		if(n-i+1<m-pos)
		{
			break;
		} 
		chose[pos]=num[i];
		dfs(pos+1,i);
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
	}
	if(m==1)
	{
		unsigned long long maxer=0; 
		for(int i=1;i<=n;i++)
		{
			maxer=max(maxer,num[i]);
		}
		cout<<maxer<<"\n";
		return 0;
	}
	else if(m==n)
	{
		int kkk=num[1];
		for(int i=2;i<=n;i++)
		{
			kkk=kkk&num[i];
		}
		cout<<kkk<<"\n";
		return 0;
	}
	dfs(1,0);
	cout<<ans<<"\n";
	return 0;
}
