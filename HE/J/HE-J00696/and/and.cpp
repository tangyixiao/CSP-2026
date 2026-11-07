//Trick||Treat!
#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N],vis[N],ans;
bool cnt[N][30];
int main()
{
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];vis[i]=1;
		for(int j=0;j<30;j++)cnt[i][j]=(a[i]&1),a[i]>>=1;
	}
	for(int j=29;j>=0;j--)
	{
		int res=0;
		for(int i=1;i<=n;i++)
			if(vis[i])
				res+=cnt[i][j];
		if(res>=m)
		{
			for(int i=1;i<=n;i++)
				if(!cnt[i][j])
					vis[i]=0;
			ans^=(1<<j);
		}
	}
	cout<<ans;
	return 0;
}//9:07:38 AC
