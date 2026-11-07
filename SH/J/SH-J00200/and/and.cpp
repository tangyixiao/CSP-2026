#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
int n, m;
int arr[N];
int ans;
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}
	sort(arr + 1, arr + 1 + n);
	int mx = log2(arr[n]) + 1;
	int try_ans = 0;
	while(mx--){
		try_ans += 1 << mx;
		int cnt = 0;
		for(int i = 1; i <= n; i++){
			if((arr[i] & try_ans) == try_ans){
				cnt++;
			}
		}
		
		if(cnt >= m){
			ans += (1 << mx);

		}
		else try_ans -= (1 << mx);
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
