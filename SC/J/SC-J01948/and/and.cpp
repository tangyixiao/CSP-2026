#include<iostream>
#include<algorithm>
#include<deque>
#include<stack>
#include<vector>
#include<cmath>
#include<cstring>
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
using namespace std;
const int N=2e5+5;
int n,m;
long long a[N],ans=0;
void Dfs(int dep,int cnt,long long sum)
{
	if(dep==n+1)
	{
		if(cnt==m) ans=max(ans,sum);
		return;
	}
	Dfs(dep+1,cnt,sum);
	if(cnt<m) Dfs(dep+1,cnt+1,(sum&a[dep]));
	return;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	IOS;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	long long tmp=pow(2,21)-1;
	Dfs(1,0,tmp);
	cout<<ans<<'\n';
	return 0;
}