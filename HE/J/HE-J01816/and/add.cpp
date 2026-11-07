#include <bits/stdc++.h>
using namespace std;
void two(int x){
	int q[200005],e[200005],f = 0;
	while(x > 0){
		e[f] = x % 2;
		x = x / 2;
		f++;
	}
	int s = 0;
	for (int i = f;i <= 0;i--){
		q[s] = e[i];
		s++;
	}
	retrun q;
}
int main(){
	freopen("add.in","r",stdin);
	freopen("add.out","w",stdout);
	int ans,chu = 0,maxn,a[200005];
	cin >> n >> m;
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}
	if (m == 2){
		for (int i = 0;i < n - 1;i++){
			for (int j = i + 1;j <= n;j++){
				maxn = two(a[i]) && two(a[j]);
				if (maxn > chu){
					ans = maxn;
				}
				chu = maxn;
			}
		}
	}
	cout << ans;
}
