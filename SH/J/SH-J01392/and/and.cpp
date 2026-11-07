#include<bits/stdc++.h>
using namespace std;
int n,m,a,maxt,t,x,s;
int sum,ans;
bool dp[55][200005],f[55][200005];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a;
		x = (int)(a / 2) * 2;
		s = x;
		t = 0;
		while((s / 2) > 0){
			t++;
			s /= 2;
		}
		while(a > 0){
			if(a > x){
				a -= x;
				f[t][i] = 1;
			}
			else f[t][i] = 0;
			t--;
			x /= 2;
		}
		maxt = max(maxt,t);
	}
	for(int i = 0;i < n;i++){
		sum = 0;
		for(int j = 0;j < maxt;j++){
			for(int k = 0;k < m;k++){
				dp[j][k] = bool((dp[j][k-1]) && (f[j][i]));
			}
		}
		for(int j = 0;j < maxt;j++) sum += dp[j][m] * pow(2,j);
		ans = max(sum,ans);
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
