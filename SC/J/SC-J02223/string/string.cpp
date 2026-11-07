#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int inf = 0x3f3f3f3f;
const int maxn = 2e5 + 5;

ll n;
string s;
ll a[maxn];
char c[maxn];
string d;
ll ans;

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1 ; i <= n ; ++ i){
		cin >> a[i] >> c[i];
		if(i == 1){
			for(int j = 0 ; j < a[i] ; ++ j){
				s += c[i];
			}
		}
		else{
			ll len = s.length();
			for(int j = len ; j < len + a[i] ; ++ j){
				s += c[i];
			}
		}
	}
	ll p = 0;
	for(int i = s.length() - 1 ; i >= 0 ; -- i){
		d[p] = s[i];
		p ++;
	}
	for(int i = 0 ; i < s.length() ; ++ i){
		if(s[i] != d[i]){
			ans ++;
		}
	}
	cout << ans / 2;
	return 0;
}