#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 5e5 + 5,M = 3003;
int n,m,a[N];
int cnt[N];
int stk[N];
int ans[N];
// I love tricks.
// I can't treat it, while tricks can score.
int dp[N][3];
void trick1(){
	for(int i = n; i >= 1; i--) {
		if(cnt[a[i]]) {
			dp[i][1] = dp[cnt[a[i]]][1];
			dp[i][2] = dp[cnt[a[i]]][2];
		} else {
			dp[i][1] = dp[i + 1][1] + (a[i] == 1);
			dp[i][2] = dp[i + 1][2] + (a[i] == 2);
		}
		cnt[a[i]] = i;
		ans[1] += dp[i][1];
		ans[2] += dp[i][2];
	}
	cout << ans[1] << " " << ans[2];
} 
bool chktrk2(){
	for(int i = 1;i < n;i++){
		if(a[i] > a[i + 1]) return 0;
	}
	return 1;
}
void trick2(){
	for(int i = 1;i <= n;i++){
		ans[a[i]] = i;
	}
	for(int i = 1;i <= m;i++){
		cout << ans[i] << " ";
	}
}
vector<int> p[N];
void trick3(){
	int tmp = n;
	for(int i = 1;i <= n;i++){
		p[a[i]].push_back(i);
	}
	for(int i = n;i >= 1;i--){
		if(p[a[i]].back() != i) continue;
		for(int j = 1;j <= m;j++){
			cnt[j] = 0;
		}
		int top = 0;
		for(int j = i;j <= n;j++){
			if(cnt[a[j]]){
				for(int k = cnt[a[j]] + 1;k <= top;k++)
					cnt[stk[k]] = 0;
				top = cnt[a[j]];
			}else{
				stk[++top] = a[j];
				cnt[a[j]] = top;
			}
		}
		for(int j = 1;j <= top;j++){
			ans[stk[j]] += p[a[i]].size();
		}
	}
	for(int i = 1;i <= m;i++){
		cout << ans[i] << " ";
	}
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	if(m == 2){
		trick1();
		return 0;
	}if(chktrk2()){
		trick2();
		return 0;
	}
	if(m <= 3000){
		trick3();
		return 0;
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			cnt[j] = 0;
		}
		int top = 0;
		for(int j = i;j <= n;j++){
			if(cnt[a[j]]){
				for(int k = cnt[a[j]] + 1;k <= top;k++)
					cnt[stk[k]] = 0;
				top = cnt[a[j]];
			}else{
				stk[++top] = a[j];
				cnt[a[j]] = top;
			}
		}
		for(int j = 1;j <= top;j++){
			ans[stk[j]] ++;
		}
	}
	for(int i = 1;i <= m;i++){
		cout << ans[i] << " ";
	}
	return 0;
}
