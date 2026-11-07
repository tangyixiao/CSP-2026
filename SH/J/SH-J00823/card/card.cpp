#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[500200] = {};
int ans[300200] = {};
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n , m;
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	for(int i = 0 ; i < n ; i++){
		for(int j = a[i] ; j <= m ; j++){
			ans[j]++;
		}
	}
	for(int j = 1 ; j <= m ; j++){
		cout << ans[j] << '\n';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
