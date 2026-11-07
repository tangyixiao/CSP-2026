#include<bits/stdc++.h>
using namespace std;
int n, m;
long long a[200005];
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1;i<=n;i++) cin >> a[i];
	long long ans = 0;
	for(int i = 1;i<=n;i++){
		for(int j = i+1;j<=n;j++){
			long long yu = a[i]&a[j];
			ans = max(ans, yu);
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
