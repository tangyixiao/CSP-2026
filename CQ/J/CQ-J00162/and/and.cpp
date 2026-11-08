#include <bits/stdc++.h>
using namespace std;
int n,m,a[200005],sw[200005][50],sums[50],tts[200005];
long long ans,lo[50];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	lo[0] = 1;
	for(int i = 1;i <= 40;i++){
		lo[i] = lo[i - 1] * 2ll;
	}
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		int t = 1,tt = a[i];
		while(tt){
			while((tt & 1) == 0){
				tt = (tt >> 1);
				t++;
			}
			sw[i][t] = 1;sums[t]++;
			tt = (tt >> 1);t++;
		}
	}
	memset(tts,1,sizeof(tts));
	for(int i = 40;i >= 1;i--){
		if(sums[i] >= m){
			for(int j = 1;j <= n;j++){
				if(sw[j][i] != 1 && tts[j]){
					tts[j] = 0;
					for(int k = i;k >= 1;k--){
						if(sw[j][k]){
							sums[k]--;
						}
					}
				}
			}
			ans += lo[i - 1];
		}
	}
	cout << ans;
	return 0;
}
