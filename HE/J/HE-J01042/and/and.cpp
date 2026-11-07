#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
string s[200005]; 
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	int ans = -1;
	if(m==1)
	{
		for(int i = 1;i <= n;i++)
		{
			ans = max(ans,a[i]);
			cout << ans;
		}
	}
	else
	{
		for(int i = 1;i <= n;i++)
		{
			for(int j = i+1;j <=n;j++)
			{
				
			}
		}
	}
	cout<< ans;
	return 0;
}
