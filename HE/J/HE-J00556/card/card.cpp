#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[500005],t[500005],f[500005],w[500005];
int ans[500005];
signed main(){
	//system("fc card.out card6.ans");
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = n;i >= 1;i--){
		if(t[a[i]] == 0) t[a[i]] = i;
		f[i] = t[a[i]];
		w[i] = 1;
	}
	for(int i = 1;i <= n;i++){
		ans[a[i]] += w[i];
		w[f[i]+1] += w[i];
	}
	for(int i = 1;i <= m;i++){
		cout << ans[i] << " ";
	}
	
	return 0;
}
