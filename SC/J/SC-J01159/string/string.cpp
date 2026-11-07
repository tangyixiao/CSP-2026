#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=2e5+10;
ll a[N];
char c[N];
ll cnt[28];
int get_mid(int n) {
	if(n%2==1) {
		return n/2+1;
	}
	return n/2;
}
int main() {
	cin.tie(0) -> ios_base::sync_with_stdio(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n;
	cin>>n;
	ll len=0;
	string s=" ";
	for(ll i=1; i<=n; i++) {
		cin>>a[i]>>c[i];
		cnt[c[i]-'a']+=a[i];
		len+=a[i];
	}
	ll mid=get_mid(len);
	string pos;
	ll res=-1;
	char c1,c2='+';
	if(len%2==0) {
		ll t=mid;
		for(ll i=1; i<=n; i++) {
			if(t-a[i]<0) {
				c1=c[i];
				c2=c[i];
				break;
			}
			if(t-a[i]==0) {
				c1=c[i];
				c2=c[i+1];
				break;
			}
			t-=a[i];
		}
		cnt[c1-'a']--;
		cnt[c2-'a']--;
		len-=2;
	} else {
		ll t=mid;
		for(ll i=1; i<=n; i++) {
			if(t-a[i]<=0) {
				c1=c[i];
				break;
			}
			t-=a[i];
		}
		cnt[c1-'a']--;
		len--;
	}
	for(ll i=0; i<26; i++) {
		res=max(cnt[i],res);
	}
	ll diff=0;
	if(c1!=c2 && c2!='+') {
		diff=1;
	}
	diff=diff+len-res;
	cout<<diff;
	return 0;
}