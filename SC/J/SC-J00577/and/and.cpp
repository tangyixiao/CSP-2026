#include<iostream>
#include<vector>
using namespace std;
#define int long long
int a[200005][35];
int b[35];
vector<int>vc;
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		for(int j=0;j<=30;j++)
		{
			a[i][j]=x%2;
			a[0][j]+=x%2;
			x/=2;
		}
	}
	b[0]=1;
	for(int i=1;i<=30;i++)
		b[i]=b[i-1]*2;
	for(int i=1;i<=n;i++)
		vc.push_back(i);
	int cnt=0;
	for(int i=30;i>=0;i--)
	{
		if(a[0][i]>=m)
		{
			cnt+=b[i];
			vector<int>v;
			for(int j=0;j<vc.size();j++)
			{
				if(a[vc[j]][i]==1)
					v.push_back(vc[j]);
				else
				{
					for(int k=i;k>=0;k--)
						a[0][k]-=a[vc[j]][k];
				}
			}
			vc=v;
		}
	}
	cout<<cnt;
} 