#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MAXN = 5e5+10;
ll mapp[MAXN],a[MAXN],yu[MAXN],sum[MAXN];
ll n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	for(int i=1;i<=n;i++)
	{
		ll head=1;
		for(int j=i;j<=n;j++)
		{
			yu[head]=a[j];
			if(mapp[a[j]]==0)
			{
				mapp[a[j]]=head;
				head++;
			}else{
				for(int k=mapp[a[j]]+1 ; k<=head-1 ; k++)
				{
					mapp[yu[k]] = 0;
				}
				head = mapp[a[j]];
				head++;
			}
		}
		for(int j=1;j<=head-1;j++)
		{
			ll yy[MAXN];
			for(int k=1;k<=m;k++)
			{
				yy[k] = 0;
			}
			if(yy[yu[j]]==0)
			{
				sum[yu[j]]++;
				yy[yu[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout << sum[i] << " ";
	}
	return 0;
} 
