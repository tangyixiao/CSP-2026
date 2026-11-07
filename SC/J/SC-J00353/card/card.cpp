#include<bits/stdc++.h>//4
using namespace std;
typedef long long ll;

const int N=1e6+16;

int n,m;
int a[N];
int bj[N];
int r;
ll ans[N];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		r=0;
		for(int j=i;j<=n;j++)
		{
			if(bj[j])
			{
				for(int k=bj[j]+1;k<=r;k++)
				{
					bj[k]=0;
				}
				r=bj[j];
				bj[j]=r;
			}
			else
			{
				++r;
				bj[j]=r;
			}
		}
		for(int j=1;j<=m;j++)
		{
			if(bj[m])
			{
				bj[m]=0;
				++ans[m];
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i];
		if(i!=m) cout<<' '; 
	}

	return 0;
}
/*
4 3
1 2 1 3
*/