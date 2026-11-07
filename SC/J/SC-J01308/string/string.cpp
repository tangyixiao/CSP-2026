#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn = 2e5 + 5;
ll n, a[maxn], sum[maxn];
char c[maxn];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	ll len = 0;
	for (ll i = 1; i <= n; i ++){
		cin >> a[i] >> c[i];
		len += a[i];
		sum[i] = sum[i - 1] + a[i];
	}
	int l = 1,r = n,mid,x;
	while (l <= r){
		mid = (l + r) / 2;
		if (sum[mid] <= len / 2){
			l = mid + 1;
			x = mid;
		}else{
			r = mid - 1;
		}
	}
	ll ls = 0,rs = 0,ans = 0,lls = 0,lrs = 0;
	l = x,r = x;
	if (len % 2 == 0){
		if (len/2 == sum[x]){
			l = x,r = x + 1,ls = a[x],rs = a[x + 1];
			lls = ls;
			lrs = rs;
			if (c[x] != c[x + 1]){
				ans += min(a[x],a[x + 1]);
			}
		}
		else {
			ls = len / 2 - sum[x - 1];
			rs = a[x] - ls;
			lls = ls;
			lrs = rs;
		}
	}else{
		if (len /2 == sum[x]){
			l = x + 1,r = x + 1,ls = 0,rs = a[x + 1] - 1;
			lls = ls;
			lrs = rs;
		}
		else{
			ls = len/2 - sum[x - 1];
			rs = a[x] - ls - 1;
			lls = ls;
			lrs = rs;
		}
	}
	
	
	while (l > 1 || r < n){
//		cout << l << ":" << ls << " " <<r << ":" << rs << " "<< ans <<  "\n";
		lls = ls;
		while (ls <= rs && l > 1){
			ls += a[l - 1];
			l --;
			if (c[l] != c[r]){
				if (ls > rs)
				ans += rs - lls;
				else{
					ans += a[l];
				}
			}
			lls = ls;
		}
//		cout << l << ":" << ls << " " <<r << ":" << rs << " "<< ans <<  "\n";
		lrs = rs;
		while (rs < ls && r < n){
			rs += a[r + 1];
			r ++;
			if (c[l] != c[r]){
				if (rs > ls)
				ans += ls - lrs;
				else{
					ans += a[r];
				}
			}
			lrs = rs;
		}
	}
	cout << ans;
	return 0;
}