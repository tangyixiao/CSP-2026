#include<bits/stdc++.h>
using namespace std;
int n;
int a[200010];
char c[200010];
long long ans;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++) {
		cin >> a[i] >> c[i];
	}
	int i = 1,j = n;
	while(i < j) {
		if(c[i] == c[j]) {
			if(a[i] == a[j]) {
				i++,j--;
			} else if(a[i] < a[j]) {
				a[j] -= a[i];
				i++;
			} else {
				a[i] -= a[j];
				j--;
			}
			continue;
		}
		if(a[i] < a[j]) {
			ans += a[i];
			a[j] -= a[i];
			i++;
		} else if(a[i] == a[j]){
			ans += a[i];
			i++,j--;
		} else if(a[i] > a[j]) {
			ans += a[j];
			a[i] -= a[j];
			j--;
		}
	}
	cout << ans << endl;
	return 0;
}
