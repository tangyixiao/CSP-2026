#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string str;
ll diff(string s){
	ll cnt=0;
	ll len=s.size();
	if(len%2==0){
		for(ll i=0;i<(len/2);++i){
			if(s[i]!=s[len-1-i]){
				++cnt;
			}
		}
		return cnt;
	}else{
		for(ll i=0;i<((len-1)/2);++i){
			if(s[i]!=s[len-1-i]){
				++cnt;
			}
		}
		return cnt;
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for(int i=1;i<=n;++i){
		ll a;
		char c;
		cin >> a >> c;
		str+=string(a,c);
	}
	cout << diff(str);
	return 0;
}
