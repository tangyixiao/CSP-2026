#include<bits/stdc++.h>
using namespace std;
long long n, a[200005], sum, ans;
char c[200005];
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%lld", &n);
	for(int i = 1;i <= n;i++){
		scanf("%lld %c", &a[i], &c[i]);
		sum += a[i];
	}
	long long len = 0, mc = ' ', mn = 0;
	for(int i = 1, j = n;i <= n;i++){
		long long l = a[i], r = 0;
		if(len + l >= sum / 2){
			l = sum / 2 - len;
		}
		len += l;
		if(l >= mn){
			l -= mn;
			if(mc != ' ' && mc != c[i])ans += mn;
			mn = 0;
			mc = ' ';
		}else{
			if(mc != ' ' && mc != c[i])ans += l;
			mn -= l;
			continue;
		}
		int k = 0;
		for(k = j;k >= 1;k--){
			r += a[k];
			if(r >= l){
				mn = r - l, mc = c[k];
				if(c[k] != c[i])ans += a[k] - mn;
				break;
			}
			if(c[k] != c[i])ans += a[k];
		}
		j = k - 1;
		if(len >= sum / 2)break;
	}
	cout << ans;
	return 0;
} 