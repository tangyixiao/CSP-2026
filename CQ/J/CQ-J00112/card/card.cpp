#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,a[200005];
ll tj[200005],d[200005];
ll ans[200005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	for(ll i=1;i<=n;i++){
		ll num=0;
		memset(tj,0,sizeof(0));
		memset(d,0,sizeof(0));
		for(int j=i;j<n;j++){//¿ªÊ¼´òÅÆ 
			if(tj[a[j]]!=0){
				bool f=0;
				ll w=num;
				for(int k=1;k<=w;k++){
					if(f){
						tj[d[k]]=0;
						d[k]=0;
					}else if(d[k]==a[j]){
						f=1;
						num=k;
					}
				}
			}else{
				d[++num]=a[j];
				tj[a[j]]++;
			}
		}
		d[++num]=a[n];
		for(int j=1;j<=num;j++){
			ans[d[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
