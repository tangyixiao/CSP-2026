#include <bits/stdc++.h>
using namespace std;

int n,l,r;
long long ans=0;
int a[200020];
char c[200020];

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> a[i] >> c[i];
	}
	l = 1;
	r = n;
	while(l < r){
		if (c[l] != c[r]){
			ans += min(a[l], a[r]);
		}
		if(a[l] > a[r]){
			a[l] -= a[r];
			a[r] = 0;
			r--;
		}
		else if(a[l] < a[r]){
			a[r] -= a[l];
			a[l] = 0;
			l++;
		}
		else{
			a[l] = 0;
			a[r] = 0;
			l++;
			r--;
		}
	}
	cout << ans;
	return 0;
}
