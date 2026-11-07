#include<bits/stdc++.h>
using namespace std;
long long a[200005] = {},e[200005] = {};
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);

	long long n,m,ans = 1;
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	sort(a + 1,a + n + 1);
	if(m == 1){
		ans = a[n];
	}else if(m == 2){
		ans = a[n] and a[n - 1];
	}else if(m == 3){
		ans = a[n] and a[n - 1] and a[n - 2];
	}else if(m == 4){
		ans = a[n] and a[n - 1] and a[n - 2] and a[n - 3];
	}else if(m == 5){
		ans = a[n] and a[n - 1] and a[n - 2] and a[n - 3] and a[n - 4];
	}

	cout << ans;
	return 0;
}