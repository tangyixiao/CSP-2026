#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ans,n,l,r,m,k;
struct node{
	ll x;
	char y;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].y;
		m+=a[i].x;
	}
	l=a[1].x;
	r=a[n].x;
	for(int i=1,j=n;l<=m/2||r<=m/2;){
		if(a[i].y!=a[j].y) ans+=min(l,r)-k;
		k=min(l,r);
		if(l==r){
			l+=a[++i].x;
			r+=a[--j].x;
		}
		else if(l<r) l+=a[++i].x;
		else r+=a[--j].x;
	}
	cout<<ans;
	return 0;
}