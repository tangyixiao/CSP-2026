#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a[100005];
	long long n;
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	int cnt = 0,ans = 0;
	for (int i = 0; i <= n; i++){
		if (a[i] & a[i+1] > cnt)
		{
			cnt = a[i] & a[i+1];
		}
		if (cnt > ans){
			ans = cnt;
		}
	}
	cout << ans << endl;
	return 0;
}
