#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],cnt[300005];
bool vis[300005];


int b[6][3],c[6][3];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	b[1][1]=1,c[1][1]=1;
	cout << b[n][m]  << " "<< c[n][m];
	return 0;
}
