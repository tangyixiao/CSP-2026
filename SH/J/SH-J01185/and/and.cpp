#include <bits/stdc++.h>

using namespace std;
const int MAXN = 3e5 + 20; 
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, k, ans = 0;
	cin >> n >> k;
	int arr[MAXN] = {};
	bool ok[MAXN] = {};
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}
	int trial = pow(2, 30);
	while(trial > 0){
		int result[30005] = {};
		int okc = 0;
		for(int i = 1; i <= n; i++){
			if(!ok[i]){
				result[i] = (arr[i] / trial) % 2;
				if(result[i]){
					okc++;
				}
			}
		}
		
		
		//cout << okc << ' ';
		if(okc >= k){
			ans += trial;
			for(int i = 1; i <= n; i++){
				ok[i] = (result[i] == 1) ? 0 : 1;
			}
		} 
		trial /= 2;
	}
	cout << ans;
	return 0;
} 

