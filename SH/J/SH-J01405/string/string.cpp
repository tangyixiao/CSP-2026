#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+1;
ll a[N];
string b[N];
string s;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	ll cnt=0;
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i]>>b[i];
		for(int j=1; j<=a[i]; j++) {
			s+=b[i];
		}
	}
	for(int i=0; i<=(s.length()/2-1); i++) {
		if((s[i]-'0')!=(s[s.length()-i-1]-'0')) {
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
