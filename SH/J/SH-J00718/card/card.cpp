#include<bits/stdc++.h>
using ll=long long;
using namespace std;
const int N=5005;
ll a[N];
ll ans[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ll n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		ll cnt[N];
		ll desktop[N];
		memset(desktop,0,sizeof(desktop));
		memset(cnt,0,sizeof(cnt));
		ll di=0;
		for(int j=i;j<=n;j++){
			int k=a[j];
			if(cnt[k]==0){
				di++;
				desktop[di]=k;
				cnt[k]=di;
			}else{
				for(int p=cnt[k];p<=di;p++){
					desktop[p]=0;	
				}
				di=cnt[k];
				desktop[di]=k;
			}
		}
		for(int i=1;i<=di;i++){
			ans[desktop[i]]++;
		}
		
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	
}
