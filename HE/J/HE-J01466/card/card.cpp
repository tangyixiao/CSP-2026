#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,a[500010],b[500010],sx[300010];
ll c=1;
ll find(ll x){
	for(ll i=1;i<x;i++){
		if(b[i]==b[x])return i;
	}return -1;
}
void np(ll x){
	for(int i=x;i<=c;i++){
		c--;
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d %d",&n,&m);
	for(ll i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(ll i=1;i<=n;i++){
		for(ll j=i;j<=n;j++){
			b[c]=a[j];
			ll r=find(c);
			if(r==-1){
				c++;
				continue;
			}
			c=r+1;
		}
		for(ll j=1;j<c;j++){
			sx[b[j]]++;
		}c=1;
	}
	for(ll i=1;i<=m;i++){
		cout<<sx[i]<<" ";
	}
	return 0;
}
