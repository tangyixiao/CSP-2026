#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n,m;
ll a[500005];

struct{
	bool flag=0;
	ll pos=-1;
}cnt[500005];

ll ans[500005];

bool flag=1;

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); 
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) flag=0;
	}
	
	if(flag){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cnt[j].flag=0;
				cnt[j].pos=-1;
			}
			for(int j=i;j<=n;j++){
				cnt[a[j]].flag=1;
				cnt[a[j]].pos=j;
			}
			for(int j=1;j<=m;j++)
				if(cnt[j].flag)
					ans[j]++;
		}
		for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
		return 0;
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cnt[j].flag=0;
			cnt[j].pos=-1;
		}
		for(int j=i;j<=n;j++){
			if(!cnt[a[j]].flag){
				cnt[a[j]].flag=1;
				cnt[a[j]].pos=j;
			}
			else{
				for(int k=cnt[a[j]].pos;k<j;k++){
					cnt[a[k]].pos=-1;
					cnt[a[k]].flag=0;
				}
				cnt[a[j]].flag=1;
				cnt[a[j]].pos=j;
			}
		}
		for(int j=1;j<=m;j++)
			if(cnt[j].flag)
				ans[j]++;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
} 
