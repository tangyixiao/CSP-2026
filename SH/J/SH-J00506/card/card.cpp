#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int ans[100005];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); 
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}	
	for(int c = 1;c <= n;c++)
	{
		bool f1 = false,f2 = true;
		for(int i = c;i <= n;i++)
		{
			if(a[i] == 1 && f1)
			{
				f2 = 0;
			}
			else if(a[i] == 1 && !f1)
			{
				f1 = 1;
			}
			if(a[i] == 2 && f2)
			{
				f1 = 0;
			}
			else if(a[i] == 2 && !f2)
			{
				f2 = 1;
			}
		}
		if(f1)
		{
			ans[1]++;
		}
		if(f2)
		{
			ans[2]++;
		}
	}
	cout << ans[1] << " " << ans[2];
	return 0;
}
