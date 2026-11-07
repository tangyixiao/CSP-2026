#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005];
bool f[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int ma=0;
//////////	
	for(int i=1;i<=n;i++) 
	{
		cin>>a[i];
		ma=max(ma,a[i]);
		f[i]=1;
	}
///////////
	int w=0;
	while( (1<<w) <= ma) w++;
	w--;
/////////
	int cnt=0;
	int ans=0;
	for(int i=w;i>=0;i--)
	{
		int cmp=(1<<i);
		cnt=0;
		for(int j=1;j<=n;j++)
		{
			if(f[j]==0) continue;
			if( (a[j]&cmp) != 0) cnt++;
		}
		if(cnt>=m)
		{
			ans+=cmp;
			for(int j=1;j<=n;j++)
			{
				if(f[j]==0) continue;
				if( (a[j]&cmp) == 0) f[j]=0;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
