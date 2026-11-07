#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const ll N=2e5+10;
ll n,k,ans,a[N];
string toer(ll t){
	if(t==0) return "0";
	string r="";
	while(t){
		r+=char((t%2)+'0');
		t/=2;
	}
	string tmp="";
	for(ll i=r.size()-1;i>=0;i--) tmp+=r[i];
	return tmp;
}
ll count1(string s){
	ll cnt=0;
	for(ll i=0;i<s.size();i++) if(s[i]=='1') cnt++;
	return cnt;
}
bool cmp(ll x,ll y){
	string s=toer(x);
	string s1=toer(y);
	return count1(s)<count1(s1)&&x<y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin.tie(nullptr)->sync_with_stdio(0);
	cout.tie(nullptr)->sync_with_stdio(0);
	cin>>n>>k;
	for(ll i=1;i<=n;i++) cin>>a[i];
	if(k==n){
		for(ll i=1;i<n;i++) a[i]=a[i-1]&a[i]; 
		cout<<a[n-1];
		return 0;
	}
	sort(a+1,a+1+n,cmp); 
	ll ans=a[n];
	for(ll i=n-1;i>n-k;i--) ans=ans&a[i];
	cout<<ans; 
	return 0;
}