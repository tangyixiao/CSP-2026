#include <bits/stdc++.h>
using namespace std;

int a[200005],vis[200005],vis2[200005]; 

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie();
	cout.tie();
	int n,m,ans=0;
	cin>>n>>m;
	for(int i=1; i<=n; i++) cin>>a[i];
	for(int i=30; i>=0; i--)
	{
		ans*=2;
		int cnt=0;
		for(int j=1; j<=n; j++)
		{
			vis2[j]=0;
			if(((a[j]>>i)&1) && !vis[j]) cnt++;
			else vis2[j]=1;
		}
		if(cnt>=m)
		{
			ans++;
			for(int j=1; j<=n; j++) vis[j]=vis2[j];
		 } 
	 } 
	cout<<ans;
	return 0;
}
//膜拜W_B_Swift大佬！ RP++!祈祷自己不要挂分 

