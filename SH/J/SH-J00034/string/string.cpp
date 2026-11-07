#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
int n,a[N];
char c[N];
signed main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    scanf("%lld",&n);
    for (int i = 1; i <= n;i++){
		scanf("%lld%s",&a[i],&c[i]);
	}
	int ans = 0;
	int l = 1,r = n;
	while (l < r){
		if (a[l] && a[r] && (c[l] != c[r])) {
			ans++;
			a[l]--;
			a[r]--;
		}
		if (c[l] == c[r]) {
			a[l]--;
			a[r]--;
		}
		if (!a[l]) l++;
		if (!a[r]) r--;
	}
	printf("%lld",ans);
    return 0;
}



