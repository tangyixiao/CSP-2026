#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int n,m,a[N];

bool check(int x){
	while(!(x % 2)){
		x >>= 1;
	}
	if(x == 0) return false;
	else return true;
}

signed main (){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;	
	for(int i = 1;i <= n;i ++ ){
		cin >> a[i];
	}
	if(m == 2 && n <= 2000){
		int maxn = -0x3f3f3f3f;
		for(int i = 1;i <= n;i ++ ){
			for(int j = 1;j <= n;j ++ ){
				if(i != j){
					maxn = max(maxn,a[i] & a[j]);
				}
			}
		}
		cout << maxn;
		return 0;
	}
	int ans = 0;
	sort(a + 1,a + 1 + n);
	for(int i = n - 1;i >= n - m + 1;i -- ){
		if(check(a[i]) || (n - m + 1) == 0){
			if(ans == 0){
				ans = a[i];
			}else{
				ans = ans & a[i];
			}
		}else{
			if((n - m + 1) > 0) m ++ ;
		}
	}
	cout << ans;
	return 0;
}
