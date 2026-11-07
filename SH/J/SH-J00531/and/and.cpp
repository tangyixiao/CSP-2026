#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int a[N];
long long check(){
	long long x;
	long long ans = 0;
	while(x != 0){
		ans += x % 2;
		x /= 2;
		ans *= 10;
	}
	cout << ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n, m;
	cin >> n >> m;
	int cnt = 0;
	int num = 0;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		cnt = max(cnt, a[i]);
		num = min(num, a[i]);
	}
	if(m == 1){
		cout << cnt;
	}else if(m == n){
		cout << num;
	}
	return 0;
}
