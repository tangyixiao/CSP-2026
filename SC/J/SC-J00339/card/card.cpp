#include<bits/stdc++.h>
long long n, m, ans[500005], num[500005], st, en,maxx;
using namespace std;
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	for (int k = 1; k <= n; k++) {
		st=0;
		en=0;
		for (int i = k-1; i < n; i++) {
			for (int j = i + 1; j <= n; j++) {
				if (num[j] == num[i]) {
					st = i;
					break;
				}
			}
		}
		for (int i = n - 1; i >= k-1; i--) {
			for (int j = i - 1; j >= k-1; j--) {
				if (num[j] == num[i]) {
					en = i;
					break;
				}
			}
		}
		for (int i = k-1; i <= st; i++) {
			ans[num[i]-1]++;
		}
		if(en+1>=k-1){
			maxx=en+1;
		}else{
			maxx=k-1;
		}
		for (int i = maxx; i <= n-1; i++) {
			ans[num[i]-1]++;
		}
	}
	for(int i=0;i<m;i++){
		cout<<ans[i]<<" ";
	}
}