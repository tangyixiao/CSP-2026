#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=5e5+5;
ll ans[N],a[N],n,m,last[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=m;j++)last[j]=0;
		for(ll j=i;j<=n;j++){
			if(!last[a[j]])last[a[j]]=j;
			else{
				for(ll k=last[a[j]];k<=j;k++){
					last[a[k]]=0;
				}
				last[a[j]]=j;
			}
		}
		for(ll j=1;j<=m;j++){
			if(last[j])ans[j]++;
		}
	}
	for(ll i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}
