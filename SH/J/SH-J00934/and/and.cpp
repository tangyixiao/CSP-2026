#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	int a[200005];
	for (int i=1;i<=n;i++){
		cin >> a[i];
	}
	if(m==1){
		int ans=0;
		for (int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
		cout << ans;
	}else if(m==2){
		int ans=0;
		for (int i=1;i<=n;i++){
			for (int j=1;j<=n;j++){
				if(i==j){
					continue;
				}
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout << ans;
	}else{
		int ans=a[1]&a[2];
		for (int i=3;i<=n;i++){
			ans=ans&a[i];
		}
		cout << ans;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
