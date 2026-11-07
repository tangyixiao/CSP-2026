#include<bits/stdc++.h>
using namespace std;
int a[200010];
char c[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i] >> c[i];
	}
	long long ans = 0;
	for(int i = 1; 2 * i <= n; i++){
		int j = n - i + 1;
		if(i == j) break;
		if(c[i] == c[j]) continue;
		else{
			ans += max(a[i],a[j]);
		}
	}
	cout << ans;
	return 0;
}