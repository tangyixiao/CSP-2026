#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N = 200005;
ll n, a[N], suml[N], sumr[N], ans;
char c[N];
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	for(int i = 1; i <= n; ++ i){
		cin >> a[i] >> c[i];
		suml[i] = suml[i - 1] + a[i];
	}
	
	for(int i = n; i >= 1; -- i)
		sumr[i] = sumr[i + 1] + a[i];
	
	int l = 1, r = n;
	while(l < r){
//		printf("l = %d, r = %d\n", l, r);
		if(suml[l] <= sumr[r]){
			if(c[l] != c[r]){
				ans += min(a[l], suml[l] - sumr[r + 1]);
			}
			++ l;
		}else{
			if(c[l] != c[r]){
				ans += min(a[r], sumr[r] - suml[l - 1]);
			}
			-- r;
		}
	}
	cout << ans;
	return 0;
}
