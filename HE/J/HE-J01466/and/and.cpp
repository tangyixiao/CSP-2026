#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,b[40];

struct node{
	ll z;
	ll jz=LONG_LONG_MAX;
	ll jzs;
}a[200010];
bool cmp(node a,node b){
	if(a.jzs==b.jzs)return a.jz<b.jz;
	else return a.jzs>b.jzs;
}bool cmp1(node a,node b){
	return a.z>b.z;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	
	for(ll i=1;i<=n;i++){
		scanf("%d",&a[i].z);
		
	}
	for(ll i=1;i<=30;i++){
		b[i]=pow(2,i);
	}
	for(ll i=1;i<=30;i++){
		for(ll j=1;j<=n;j++){
			a[j].jz=min(a[j].jz,abs(b[i]-a[j].z));
			if(a[j].jz==abs(a[j].z-b[i]))a[j].jzs=b[i];
		}
	}sort(a+1,a+1+n,cmp1);
	sort(a+1,a+1+n,cmp);
	ll ans=0b1111111111111111111111111111111111111111111111111111111111111111111111111;
	for(ll i=1;i<=m;i++){
		ans=ans&a[i].z;
	}cout<<ans;
	return 0;
}
