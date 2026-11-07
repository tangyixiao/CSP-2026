#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll a[N],n,m;
void solve6(){
	ll ans[N];
	for(ll i=0;i<n;i++){
		ans[i]=a[i]&a[i];
	}
	cout<<*max_element(ans,ans+n);
}
void solve7(){
	ll ans2=a[0];
	for(ll i=1;i<n;i++){
		ans2&=a[i];
	}
	cout<<ans2;
}
void solve8_10(){
	ll ans3[N];
	for(ll i=0;i<n;i++){
		ll this_j[N];
		for(ll j=i+1;j<n;j++){
			this_j[i]=a[i]&a[j];
		}
		ans3[i]=*max_element(this_j,this_j+n);
	}
	cout<<*max_element(ans3,ans3+n); 
}
void solve11_12(){
	ll ans4[N];
	for(int i=0;i<n;i++){
		ll anstemp=a[0];
		for(ll j=1;j<n;i++){
			if(j==i) continue;
			anstemp&=a[i];
		}
		ans4[i]=anstemp;
	}
	cout<<*max_element(ans4,ans4+n);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=0;i<n;i++) cin>>a[i];
	if(m==1) solve6();
	else if(m==n) solve7();
	else if(m==2) solve8_10();
	else if(m==n-1) solve11_12();
	return 0;
}
