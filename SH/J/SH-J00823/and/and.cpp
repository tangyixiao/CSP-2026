#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[200200] = {};
int b[200200] = {};
int twoa[200200][50] = {};
int twoint[50] = {0 , 1 , 2};
int twois[200200] = {};
int v[200200] = {};
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	for(int i = 3 ; i <= 31 ; i++){
		twoint[i] = twoint[i - 1] * 2;
	}
	twoint[32] = 0;
	int n , m;
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	vector<int> sw [50];
	for(int k = 31 ; k >= 1 ; k--){
		for(int i = 1 ; i <= n ; i++){
			if(a[i] / twoint[k] >= 1){
				twoa[i][k] = 1;
				a[i] -= twoint[k];
				sw[k].push_back(i);
				twois[k]++;
			}
		}
	}
	int k = 31;
	for( ; k >= 0 ; k--){
		if(twois[k] >= m){
			break;
		}
	}
	if(k == 0){
		cout << 0 << '\n';
		return 0;
	}else if(k == 1){
		cout << 1 << '\n';
	}
	int ans = 0;
	if(twois[k] == m){
		for(int i = 1 ; i <= k; i++){
			int cnt = 1;
			for(int j = 0 ; j < twois[k]; j++){
				int t = sw[k][j];
				if(twoa[t][i] == 0){
					cnt = 0;
				}
			}
			if(cnt){
				ans += twoint[i];
			}
		}
		cout << ans << '\n';
		return 0;
	}else{
		ans += twoint[k];
		for(int j = 0 ; j < twois[k]; j++){
			int t = sw[k][j];
			v[t] = 1;
		}
		for(int i = 1 ; i <= n + 2 ; i++){
			if(v[i] == 0){
				for(int kk = 31 ; kk >= 1 ; kk--){
					if(twoa[i][kk] == 1){
						twois[kk]--;
					}
				}
			}
		}
		for(int i = k - 1 ; i >= 1 ; i--){
			if(twois[i] >= m){
				int cnt2 = 0;
				for(int j = 1 ; j <= n ; j++){
					if(v[j] == 1 && twoa[i] == 0){
						v[j] = 0;
						cnt2++;
					}
				}
				for(int ii = i - 1 ; ii >= 1 ; ii--){
					twois[i] -= cnt2;
				}
				ans += twoint[i];
			}
		}
		cout << ans << '\n';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
