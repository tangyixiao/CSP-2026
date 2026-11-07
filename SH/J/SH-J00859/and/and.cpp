#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct node{
	ll n,c;
};
node a[200010];
ll b[50];
bool d[200010];
ll f(ll x){
	ll cnt=0;
	for(ll i=0;i<=32;++i){
		if(x&(1LL<<i))cnt++;
	}
	return cnt;
}
bool cmp(node x,node y){
	return x.c>y.c;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll n,m;
	cin>>n>>m;
	for(ll i=1;i<=n;++i){
		cin>>a[i].n;
		a[i].c=f(a[i].n);
	}
	sort(a+1,a+1+n,cmp);
	ll cnt=0;
	for(ll i=1;i<=n;++i){
		b[a[i].c]++;
	}
	ll sum=0,si=0;
	for(ll i=35;i>=0;--i){
		sum+=b[i];
		if(sum>=m){
			si=i;
			break;
		}
	}
	ll ans=a[1].n;
	if(sum==m){
		for(ll i=2;i<=m;++i){
			ans=ans&a[i].n;
		}
		cout<<ans;
		return 0;
	}else{
		ll tmp=sum-b[si];
		for(ll i=1;i<=tmp;++i)
			ans=ans&a[i].n;
		ll temp=ans;
		ans=ans&a[tmp+1].n;
		for(ll i=1;i<=m-tmp;++i){
			for(ll j=tmp+1;j<=tmp+b[si];++j){
				if(d[j])continue;
				if(temp&a[j].n>ans){
					ans=ans&a[j].n;
					d[j]=true;
				}
			}
			temp=ans;
			for(ll j=tmp+1;j<=tmp+b[si];++j)
				if(!d[j]){
					ans=temp&a[j].n;
					break;
				}
		}
		cout<<ans;
		return 0;
	}
	return 0;
}
