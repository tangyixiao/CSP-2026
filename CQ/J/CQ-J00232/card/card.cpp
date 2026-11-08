#include<bits/stdc++.h>
using namespace std;
int a[500005],ans[300005] = {0};
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i = 1;i <= n;i ++) cin >> a[i];
	if(n > 500 && m > 200) {
		for(int i = 1;i <= n;i ++) {
			for(int j = a[i];j <= m;j ++) {
				ans[j] ++;
			}
		}
		for(int i = 1;i <= m;i ++) cout << ans[i] << " ";
		return 0;
	}
	for(int i = 1;i <= n;i ++) {
		bool b[500005] = {0};
		for(int j = i;j <= n;j ++) {
			if(b[j] == 0) {
				for(int k = j - 1;k >= i;k --) if(a[k] == a[j] && b[k] == 0) {
					for(int p = k + 1;p <= j;p ++) b[p] = 1;
				}
			}
		}
//		for(int j = i;j <= n;j ++) cout << b[j] << " ";
//		cout << endl;
		for(int j = i;j <= n;j ++) if(b[j] == 0) ans[a[j]] ++;
	}
	for(int i = 1;i <= m;i ++) cout << ans[i] << " ";
	return 0;
}

/*

10 3
3 1 2 1 3 2 3 1 2 1

*/
