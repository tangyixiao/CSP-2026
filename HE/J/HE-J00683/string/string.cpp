#include <bits/stdc++.h>
using namespace std;

signed main(){
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	int n , a[200010];
	char c[200010];
	long long len = 0 , cnt;
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i] >> c[i];
		len += a[i];
	}cnt = len / 2;
	long long l = 1 , r = n , li = 0 , ri = len;
	long long nowl = a[l] , nowr = len - a[r];
	while(l < r && li <= cnt && ri > cnt){
		int xl = nowl - li , xr = ri - nowr;
		if(c[l] == c[r]) cnt -= min(xl , xr);
		if(xl < xr) l++ , li = nowl , ri = len - li , nowl += a[l];
		else if(xl == xr) l++ , r-- , li = nowl , ri = nowr , nowl += a[l] , nowr -= a[r];
		else r-- , ri = nowr , li = len - ri , nowr -= a[r]; 
	}if(l == r) cnt -= min(len / 2 - li , ri - len / 2 - len % 2);
	cout << cnt;
	return 0;
}
 
