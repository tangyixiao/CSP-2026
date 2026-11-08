#include<bits/stdc++.h>
using namespace std;
int ans=-1;
int a[200005];
int sum1[200005];
int n,m;
int inline M (int a,int b)
{
	return (a&b);
}
void inline dfs(int now,int mm,int s)
{
	//cout<<now<<' '<<mm<<' '<<s<<endl;
	if(now==n||mm==m)
	{
		if(mm==m)
		{
			ans=max(ans,s);
		}
		return;
		
	}
	if((n-now)<(m-mm))
	{
		//cout<<9991;
		return;
	}
//5 3
//31 3 1 15 7
	now++;
	if(mm!=0)dfs(now,mm+1,M(s,a[now]));
	else dfs(now,mm+1,a[now]);
	dfs(now,mm,s);
}

int main()
{
	//我要上迷惑行为大赏 
	//hezhiqianisagay
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	cin>>n>>m;
	sum1[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum1[i]=sum1[i-1]+a[i];
	}
	dfs(1,0,0);
	dfs(1,1,a[1]);
	cout<<ans;
	return 0; 
}// ccf baoyouwo
