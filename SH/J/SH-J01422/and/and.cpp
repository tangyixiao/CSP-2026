#include <bits/stdc++.h>
using namespace std;
int n,k;
long long a[200005],ans,minn,sum;
void dfs(int x,int floor,int y)
{
	for(int i=x;i<=n;i++)
	{
		if(floor==k)
		{
			if((y&a[i])>ans) ans=(y&a[i]);
			continue;
		}
		if(floor==1) dfs(i+1,floor+1,a[i]);
		else dfs(i+1,floor+1,y&a[i]);
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	dfs(1,1,0);
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
