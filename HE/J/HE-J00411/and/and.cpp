#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,ans;
int a[200010];
int er[200010][35];
int maxn = INT_MIN;
int maxm = INT_MIN; 
int js[35];
int jt[200010]; 
int tong[200010];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i<=n;i++){
		cin >> a[i];
		int tmp = a[i];
		int j = 1;
		while(tmp != 0){
			er[i][j] = tmp % 2;
			j++;
			tmp = tmp/2;
		}
		maxn = max(maxn,j); 
		maxm = max(maxm,a[i]);
	}
//	for(int i = 1;i<=n;i++){
//		for(int k = 1;k<=10;k++){
//			cout << er[i][k];
//		}
//		cout << '\n';
//	}
	if(m == 1){
		cout << maxm;
		return 0;
	}
	for(int i = maxn;i>=1;i--){
		for(int j = 1;j<=n;j++){
			if(er[j][i] == 1) js[i]++;
		}
	}
	int jl = 1;
	for(int i = maxn;i>=1;i--){
		if(js[i] <= 1) continue;
		else{
			for(int j = 1;j<=n;j++){
				if(er[j][i] == 1 && tong[j] == 0) {
					tong[j]++;
					jt[jl] = j;
					jl++;
				}
			}
		}
	}
	ans = a[jt[1]];
	for(int i = 2;i<=m;i++){
		ans = ans & a[jt[i]];
	}
	cout << ans;
	return 0;
}
