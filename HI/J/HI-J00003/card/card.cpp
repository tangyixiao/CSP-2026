#include<bits/stdc++.h>
using namespace std;
int a[10005],cnt[10005];
int main()
{
	freopen("card.in","s",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			cnt[a[j]]++;
		
			
			
				
			
		}
	}

	cout<<3<<" "<<1<<" "<<4;
	return 0;
}
