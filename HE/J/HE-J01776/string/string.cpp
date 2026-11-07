#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,cnt;
struct lp{
	ll l;
	ll r;
	char w;
}a[200005];
char find(ll s){
	for(ll j=1;j<=n;j++){
		if(a[j].l<=s&&a[j].r>=s){
			return a[j].w;
		}
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;ll sum=0;
	for(ll i=1;i<=n;i++){
		ll x;char y;cin>>x>>y;
		if(i==1){
			a[1].l=1;a[1].r=x;a[1].w=y;
		}else{
			if(a[i-1-sum].w!=y){
				a[i-sum].l=a[i-1-sum].r+1;a[i-sum].r=a[i-1-sum].r+x;a[i-sum].w=y;
			}
			else{
				sum++;a[i-sum].r+=x;
			}
		}
	}n-=sum;
	if(n==1) cout<<0;
	else{
		ll mid=(a[n].r+1)/2;
		if(n==2){
			cout<<min(a[1].r,a[2].r-a[1].r);
		}
		else{
			
			for(ll i=1;i<=mid;i++){
				if(find(i)!=find(a[n].r-i+1)) cnt++;
			}cout<<cnt;
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
