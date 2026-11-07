#include <bits/stdc++.h>
using namespace std;
int a[200005],dp[200005][2005]; 

int main() 
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);

	int m,n; cin >> n >> m;
	for(int i=1;i<=n;i++) {cin >> a[i]; dp[i][1]=a[i];}
	for(int i=1;i<=n;i++)
	{
		for(int j=min(i,m);j>1;j--)
		{
			for(int k=1;k<=i-1;k++)
			{
				dp[i][j]=max(max(dp[k][j],dp[i][j]),a[i]&dp[k][j-1]);	
			}
		}
	}
	cout << dp[n][m] << endl;
	return 0;
	fclose(stdin);
	fclose(stdout); 
}
