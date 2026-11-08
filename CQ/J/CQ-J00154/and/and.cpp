#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N];
bool vis[N];

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	int ans=0;
	for(int i=30;i>=0;i--)
	{
		int cnt=0;
		for(int j=1;j<=n;j++)
			if(!vis[j] and ((a[j]>>i)&1)==1)
				cnt++;
		if(cnt>=m)
		{
			ans+=(1<<i);
			for(int j=1;j<=n;j++)
				if(!vis[j] and ((a[j]>>i)&1)==0)
					vis[j]=1;
		}
	}
	cout<<ans;
	
	return 0;
}
// 3:0011
//15:1111
//12:1100
//12:1100
