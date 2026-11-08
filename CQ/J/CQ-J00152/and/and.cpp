#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int N=2e5+10;
int n, m;
int a[N];
int num[N], f[N][35];
int last;
bool vis[N];
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr); 
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin>>n>>m;
	last=n;
	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
		for(int j=0; j<=30; j++)
			if((a[i]>>j)&1)
				num[j]++, f[i][j]++;
	}
	int ans=0;
	for(int i=30; i>=0; i--)
		if(num[i]>=m) {
			if(last!=num[i])
				for(int j=1; j<=n; j++)
					if(!vis[j]) {
						if(!((a[j]>>i)&1)) {
							vis[j]=1;
							for(int k=i-1; k>=0; k--)
								num[k]-=f[j][k];
							last--;
						}
					}
			ans+=(1<<i);
		}
	cout<<ans;
	return 0;
}
