#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 5e5+10;
ll a[maxn];
char c[maxn];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n;
	cin >> n;
	string s = "";
	for(int i = 1; i <= n; i++){
		cin >> a[i] >> c[i];
	}
	ll l = 1,r = n;
	ll ans = 0;
	char now_c;
	ll now_s = 0;
	ll now_f = 0;
	while(l <= r){
		if(c[l] != c[r]){
			ans+=min(a[l],a[r]);
			now_s = abs(a[l]-a[r]);
			if(a[l]-a[r]<0){
				now_c = c[r];
				now_f = 1;
			}
			else {
				now_c = c[l];
				now_f = 0;
			}
		}
		if(now_s > 0 && now_f == 0){
			if(c[l+1]!=now_c){
				ans+=min(now_s,a[l+1]);
				a[l+1]+=now_s;
				now_s = 0;
			}
		}
		else if(now_s > 0 && now_f == 1){
			if(c[r+1]!=now_c){
				ans+=min(now_s,a[r+1]);
				a[r+1]+=now_s;
				now_s = 0;
			}
		}
		l++,r--;
	}
	cout << ans;
	return 0;
}
