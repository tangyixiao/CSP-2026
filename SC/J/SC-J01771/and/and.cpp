#include <iostream>
using namespace std;
const int N=2e5+5;
int n,m,a[N],ans=-1;
bool vis[N];
void dfs(int cnt,int val)
{
	if(val<ans)
		return;
	if(cnt==m)
	{
		ans=max(ans,val);
		return;
	}
	for(int i=1;i<=n;i++)
		if(!vis[i])
		{
			vis[i]=true;
			dfs(cnt+1,val&a[i]);
			vis[i]=false;
		}
	return;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	dfs(0,(1<<30)-1);
	cout<<ans<<"\n";
	return 0;
}