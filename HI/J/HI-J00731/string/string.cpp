#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[200005];char b[200005];
ll ans = 0;
ll cnt = 0;
ll gcd(ll a,ll b){
	int c = max(a,b)%min(a,b);
	if(c<=0) return min(a,b);
	else gcd(min(a,b),c);
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i = 0;i<n;i++) cin>>a[i]>>b[i];
	ll t = a[0];
	for(int i = 1;i<n;i++){
		t = gcd(t,a[i]);
	}
	string s = "";
	for(int i = 0;i<n;i++){
		for(int j = 0;j<(a[i]/t);j++){
		    s[i*(a[i]/t)+j] = b[i];
		    cnt++;
		}
    }
	for(int i = 0;i<(cnt/2);i++){
		if(s[i] != s[cnt-i-1]){
		    ans++;
		}
	}
	ans = 1LL*ans*t;
	cout<<ans;
	return 0;
} 
