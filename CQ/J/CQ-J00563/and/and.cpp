#include<bits/stdc++.h>
using namespace std;
namespace did
{
	const int N=2e5+5;
	int a[2][N],ans;
	int main()
	{
		//freopen("Êý¾Ý-T3","r",stdin);
		freopen("and.in","r",stdin);
		freopen("and.out","w",stdout);
		ios::sync_with_stdio(0);
		cin.tie(0);
		int n,m,cur=0;
		cin>>n>>m;
		for(int i=1;i<=n;i++) cin>>a[cur][i];
		for(int i=30;i>=0;i--)
		{
			int nxt=1-cur,new_n=0;
			for(int j=1;j<=n;j++)
			{
				if(a[cur][j]&(1<<i)) a[nxt][++new_n]=a[cur][j];
			}
			if(new_n>=m)
			{
				cur=nxt;
				n=new_n;
				ans+=(1<<i);
			}
		}
		cout<<ans;
		return 0;
	}
}
int main()
{
	did::main();
	return 0;
}
