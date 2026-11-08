#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[200010];
char c[200010];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	scanf("%lld",&n);
	for(int i = 1;i <= n;i++) scanf("%lld %c",&a[i],&c[i]);
	int l = 1,r = n,cnt = 0;
	while(l < r){
		if(a[l] == a[r]){
			cnt += (c[l] == c[r]) ? 0 : a[l]; 
			l++,r--;
		}
		if(a[l] > a[r]){
			cnt += (c[l] == c[r]) ? 0 : a[r]; 
			a[l] -= a[r];
			r--;
		}
		if(a[l] < a[r]){
			cnt += (c[l] == c[r]) ? 0 : a[l]; 
			a[r] -= a[l];
			l++;
		}
	}
	printf("%lld",cnt);
	return 0;
}
