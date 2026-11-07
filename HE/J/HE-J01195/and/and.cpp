#include <bits/stdc++.h>
using namespace std;
long long n,m,ans,sum;
long long a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i ++){
		cin >> a[i];
	}
	if (m == 1){
		cout << 0;
		return 0;
	}
	for(int i = 1;i <= n;i ++){
		for(int j = i + 1;j <= n;j ++){
			sum = a[i] & a[j];
			ans = max(ans,sum);
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
