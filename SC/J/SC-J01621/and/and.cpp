#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
vector<int> g[N];
bool b[31][N];
int cnt[N];
void f(int x,int id)
{
	for(int i=0;i<30;i++)
	{
//		cout<<x<<" ";
		if(x%2==0)
		{
//			cout<<"A";
			b[i][id]=1;
			cnt[i]++;
		}
		x/=2;
	}
//	cout<<"\n";
	return; 
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		f(a[i],i);
	}
	long long ans=0;
	m=n-m;
	for(int i=29;i>=0;i--)
	{
//		cout<<cnt[i]<<" ";
		if(cnt[i]>m)
			continue;
		m-=cnt[i];
		for(int j=1;j<=n;j++)
			if(b[i][j]==1)
			{
				for(int l=0;l<i;l++)
				{
					if(b[l][j]==1)
						cnt[l]--;
					b[l][j]=0;
				} 
			}
		ans+=(1<<i); 
	}
	cout<<ans;
	return 0;
}