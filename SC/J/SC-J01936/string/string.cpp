#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,sum,lq,rq,ans;
struct node{
	ll l,r;
	char zf;
}a[200005];
int main(){
	ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		ll x;
		cin>>x>>a[i].zf;
		sum++;
		a[i]={sum,sum+x-1,a[i].zf};
		sum=sum+x-1;
	}
	a[n+1].l=sum+1;
	ll le,ri;
	if(sum%2==0){
		le=sum/2,ri=sum/2+1;
		for(int i=1;i<=n;i++){
			if(a[i].l<=le&&a[i].r>=le) lq=i;
			if(a[i].l<=ri&&a[i].r>=ri) rq=i;
		}
	}
	else {
		le=ri=sum/2+1;
		for(int i=1;i<=n;i++){
			if(a[i].l<=le&&a[i].r>=le){
				lq=rq=i;
				break;
			}
		}
	}
	while(ri<=sum){
		if(a[lq].zf==a[rq].zf){
			ll t=min(a[rq+1].l-ri,le-a[lq-1].r);
			le-=t;
			ri+=t;
			while(le<a[lq].l) lq--;
			while(ri>a[rq].r) rq++;
		}
		else {
			ll t=min(a[rq+1].l-ri,le-a[lq-1].r);
			ans+=t;
			le-=t;
			ri+=t;
			while(le<a[lq].l) lq--;
			while(ri>a[rq].r) rq++;
		}
	}
	cout<<ans;
	return 0;
}