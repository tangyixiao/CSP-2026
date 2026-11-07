#include <bits/stdc++.h>
using namespace std;
int main (){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin >> n >> m;
	long long a[n];
	for(long long i = 0;i < n;i++) cin >> a[i];
	long long ans = 0;
	if(m == 1){
		for(long long i = 0;i < n;i++) ans = max(ans,a[i]);
		cout << ans;
	}else if(m == 2){
		for(long long i = 0;i < n;i++){
			for(int j = i + 1;j < n;j++)
				ans = max(ans,a[i] & a[j]);
		}
		cout << ans;
	}else cout << 0;
	return 0;
}
