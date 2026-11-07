#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=2e5+7;
ll n,m,x[N],ans,cnt[5];
bool A(){
	for(ll i=1;i<=n;i++){
		if((x[i]+1)%2!=0) return false;
	}
	return true;
}
bool B(){
	for(ll i=1;i<=n;i++){
		if(x[i]!=i-1) return false;
	}
	return true;
}
bool check(ll sz){
	for(ll i=1;i<=n;i++){
		if(x[i]>sz) return false;
	}
	return true;
}
bool cmp(ll a,ll b){
	return a>b;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>x[i];
		cnt[x[i]]++;
	}
	if(m==n){
		ans=x[1];
		for(ll i=2;i<=n;i++) ans=ans&x[i];
		cout<<ans<<"\n";
		return 0;
	}
	if(n<=20){
		sort(x+1,x+n+1);
		ans=-N;
		do{
			ll ans1=x[1];
			for(ll i=2;i<=m;i++){
				ans1=ans1&x[i];
			}
			ans=max(ans,ans1);
		}while(next_permutation(x+1,x+n+1));
		cout<<ans<<"\n";
		return 0;
	}
	if(n<=2000){
		if(m==1){
			ans=-N;
			for(ll i=1;i<=n;i++){
				ans=max(ans,x[i]);
			}	
			cout<<ans<<"\n";
			return 0;
		}
		if(m==2){
			ans=-N;
			for(ll i=1;i<=n-1;i++){
				for(ll j=i+1;j<=n;j++){
					ans=max(ans,x[i]&x[j]);
				}
			}
			cout<<ans<<"\n";
			return 0;
		}
	}
	if(A()){
		ans=-N;
		for(ll i=1;i<=n;i++){
			ans=max(ans,x[i]);
		}	
		cout<<ans<<"\n";
		return 0;
	}
	if(B()){
		sort(x+1,x+n+1,cmp);
		ans=x[1];
		for(ll i=2;i<=m;i++){
			ans=ans&x[i];
		}
		cout<<ans<<"\n";
		return 0;
	}
	if(check(4)){
		for(ll i=1;i<=n;i++){
			cnt[x[i]]++;
		}
		if(m<=cnt[4]){
			cout<<4<<"\n";
			return 0;
		}
		if(m>cnt[4]&&m<cnt[3]){
			cout<<3<<"\n";
			return 0;
		}
		if(m>cnt[3]&&m<cnt[2]){
			cout<<2<<"\n";
			return 0;
		}
		if(m>cnt[2]&&m<cnt[1]){
			cout<<1<<"\n";
			return 0;
		}
		cout<<0<<"\n"; return 0;
	}
	if(m==n-1){
		ll mn=-N,mnid=-N;
		for(ll i=1;i<=n;i++){
			mn=min(mn,x[i]);
			mnid=i;
		}
		bool b=(mnid==1);
		ans=(b?x[2]:x[1]);
		for(ll i=(b?3:2);i<=n;i++){
			if(i!=mnid) ans&=x[i];
		}
		cout<<ans<<"\n";
		return 0;
	}
	else{
		return 0;
	}
	return 0;
}
