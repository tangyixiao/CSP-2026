#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m;
ll a[200005];
map < ll , ll > v;
ll l=0;
ll k=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>k){
			k=a[i];
		}
	}
	for(ll i=1;i<=n;i++){
		l=0;
		for(ll j=i;j<=n;j++){
			if(a[j]==a[i])
			{
				for(ll o=i+1;o<j;o++){
					if(a[o]!=a[i]){
						v[o]--;
					}
				}
				l++;
			}
		}
		if(l%2==1){
			v[a[i]]+=i;
		}
	}
	for(ll i=1;i<=k;i++){
		if(v[i]) cout<<v[i]<<" ";
	}
	return 0;
}
