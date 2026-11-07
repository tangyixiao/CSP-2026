#include<bits/stdc++.h>
using namespace std;
const int N = 5e5+5;
int n, m, a[N], pos[N], ans[N];
int main(){
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++) cin >> a[i];
	for (int i = n;i >= 1;i--) if (pos[a[i]] == 0) pos[a[i]] = i;
	for (int i = 1;i <= n;i++){
		for (int j = i;j <= n;j++){
			ans[a[j]]++;
			j = pos[a[j]];
		}
	}
	for (int i = 1;i <= m;i++) cout << ans[i] << ' ';
	return 0;
}