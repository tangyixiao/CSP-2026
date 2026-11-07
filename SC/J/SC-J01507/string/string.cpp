#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s;
ll n;
ll l = 0,ans = 0;
ll ai;
char ci;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin >> n;
	for(ll i = 1;i <= n;i++){
		cin >> ai >> ci;
		for(ll j = l;j - l < ai;j++){
			s[j] = ci;
		}
		l += ai;
	}
	ll L = 0,R = l - 1;
	while(L <= R){
		if(s[L] != s[R]){
			ans++;
		}
		L++;
		R--;
	}
	cout << ans;
	return 0;
}