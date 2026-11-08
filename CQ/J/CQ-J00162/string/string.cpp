#include <bits/stdc++.h>
using namespace std;
long long n,a[200005],l,r;
long long ans;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i] >> c[i];
	}
	l = 1;r = n;
	while(l < r){
		while(c[l] == c[r] && l < r){
			if(a[l] > a[r]){
				a[l] -= a[r];r--;
			}else if(a[l] < a[r]){
				a[r] -= a[l];l++;
			}else{
				l++;r--;
			}
		}
		while(c[l] != c[r] && l < r){
			if(a[l] > a[r]){
				a[l] -= a[r];ans += a[r];r--;
			}else if(a[l] < a[r]){
				a[r] -= a[l];ans += a[l];l++;
			}else{
				ans += a[l];l++;r--;
			}
		}
	}
	cout << ans;
	return 0;
}
