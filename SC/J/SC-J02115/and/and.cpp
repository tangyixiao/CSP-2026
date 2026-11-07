#include<bits/stdc++.h>
using namespace std;
int h[200005];
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> h[i];
	}
	if (n == m + 1) {
		int ans = 0 ;
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++) {
				int cnt;
				if(i!=1){
					cnt=h[1];
				}else{
					cnt=h[2];
				}
				if (j != i)
					cnt = cnt & h[i];
				ans=max(ans,cnt);
			}
		cout << ans;
	}else if(m==2){
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<i;j++){
				ans=max(ans,h[i]&h[j]);
			}
		}
		cout<<ans;
	}
	else {
		sort(h + 1, h + 1 + n);
		int ans = h[n];
		//cout<<h[n]<<" ";
		for (int i = n; i > n - m; i--) {
			ans = ans & h[i];
			//cout<<h[i]<<" ";
		}
		//cout<<endl;
		cout << ans;
	}
	return 0;
}