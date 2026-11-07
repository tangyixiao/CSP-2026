#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
ll ans;
struct stu {
	ll a;
	string b;
} s[1000086];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1; i<=n; i++) {
		ll x;
		string y;
		cin >> x >> y;
		s[i].a=x;
		s[i].b=y;
	}
	for(ll i=1,j=n; i<j;) {
		if(s[i].b!=s[j].b) {
			if(s[i].a<s[j].a) {

				s[j].a-=s[i].a;
				ans+=s[i].a;
				i++;
//				cout<<i<<" "<<j<<" "<<s[i].a<<" "<<s[j].a<<"\n";
			} else if(s[i].a>s[j].a) {

				s[i].a-=s[j].a;
				ans+=s[j].a;
				j--;
//				cout<<i<<" "<<j<<" "<<s[i].a<<" "<<s[j].a<<"\n";
			} else {

				ans+=s[i].a;
				i++;
				j--;
//				cout<<i<<" "<<j<<" "<<s[i].a<<" "<<s[j].a<<"\n";
			}
		} else {
			if(s[i].a<s[j].a) {

				s[j].a-=s[i].a;
				i++;
			} else if(s[i].a>s[j].a) {

				s[i].a-=s[j].a;
				j--;
			} else {
				i++;
				j--;
			}
		}
	}
	cout<<ans;
	return 0;
}
