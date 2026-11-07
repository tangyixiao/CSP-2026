#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m; cin>>n>>m;
	vector<ll> a(n+1);
	vector<ll> cnt(m+1,0);
	vector<ll> cnt2(m+1,0);
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	} 
	ll i=1;
	while(i<=m+1){
		for(ll j=i;j<=n;j++){
			if(cnt[a[j]]){
				for(ll q=1;q<=m;q++){
					cnt[q]=0;
				}
				cnt[a[j]]++;
			}else cnt[a[j]]++;
		}
		i++;
		for(ll k=1;k<=m;k++){
			if(cnt[k]){
				cnt2[k]++;
				cnt[k]=0;
			}
		}	
		
		
	}
	for(ll i=1;i<=m;i++){
		cout<<cnt2[i]<<" ";
	}
	return 0;
}