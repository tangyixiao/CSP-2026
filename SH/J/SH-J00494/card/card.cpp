#include<bits/stdc++.h>
using namespace std;
int a[5005];
int pref[5005][3005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	
	for(int i = 1;i<=n;i++){cin>>a[i];}
	
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=m;j++){pref[i][j]=pref[i-1][j];
		}
		if(pref[i][a[i]])
		{
			int h = lower_bound(a+1,a+n+1,a[i])-a;
			cout<<h<<endl;
			for(int y = h;h<i;h++) {
				pref[i][a[y]]--;
			}
		}
		pref[i][a[i]]++;
	}
	
	
	for(int k = 1;k<=m;k++){
	int ans = 0;
	for(int i = 1;i<=n;i++)
	{
		ans+=(pref[i][k]>=1);
	}
	cout<<ans<<' ';
}
	return 0;
	
}
