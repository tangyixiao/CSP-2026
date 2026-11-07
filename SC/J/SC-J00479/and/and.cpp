#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],ans,step[200005];
void dfs(int steps,long long x,long long answer) {
	if(steps==0)
	{
		ans=max(ans,answer);
		return ;
	}
	
	if(steps==m)
	{
		x++;
		
		for(;x<=n-steps+1;x++)
		{
			dfs(steps-1,x,a[x]);
			
		}
	}
	else
	{
		x++;
		
		for(;x<=n-steps+1;x++)
		{
			if(answer&a[x]<step[steps])
			{
				continue;
			}
			step[steps]=answer&a[x];
			dfs(steps-1,x,answer&a[x]);
		}
	}
}
int main() {
	//
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	dfs(m,0,0);
	cout<<ans;
	return 0;
}