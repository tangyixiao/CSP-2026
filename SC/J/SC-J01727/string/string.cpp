#include <bits/stdc++.h>
using namespace std;
long long n;
long long a[1000005];
long long sum[1000005];
char ch[1000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
		cin >> ch[i];
		sum[i] = sum[i-1] + a[i];
	}
	long long lid = 1,rid = n;
	long long l = 1;
	long long r = sum[n];
	long long ans = 0;
	while (l < r){
		if (ch[lid] == ch[rid]){
			long long wy = min(sum[lid] - l + 1ll,r - sum[rid - 1]);
			l += wy;
			r -= wy;
			while (l > sum[lid]) lid++;
			while (r < sum[rid-1] + 1) rid--; 
		}
		else {
			long long wy = min(sum[lid] - l + 1ll,r - sum[rid - 1]);
			l += wy;
			r -= wy;
			while (l > sum[lid]) lid++;
			while (r < sum[rid-1] + 1) rid--;
			ans += wy;
		}
	}
	printf("%lld",ans);
	return 0;
}