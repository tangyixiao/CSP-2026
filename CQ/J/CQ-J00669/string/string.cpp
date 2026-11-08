#include<bits/stdc++.h>
using namespace std;
const int MAX = 2e5 + 5;
int a[MAX];
char c[MAX]; 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i] >> c[i];
	int l = 1, r = n;
	long long ans = 0;
	int lr = 0;
	while(l < r){
		if(c[l] == c[r]){
			if(a[l] == a[r]) l++, r--;
			else if(a[l] < a[r]) a[r] -= a[l], l++;
			else a[l] -= a[r], r--;
		}else{
			ans += min(a[l], a[r]);
			if(a[l] == a[r]) l++, r--;
			else if(a[l] < a[r]) a[r] -= a[l], l++;
			else a[l] -= a[r], r--;
		}
	}
	cout << ans;
	return 0;
}
