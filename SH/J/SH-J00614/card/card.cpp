#include <iostream>
#include <vector>
using namespace std;

int arr[int(5e5 + 10)];
vector<int> dp[int(5e5 + 10)];
//dp[x]:场上还剩x张牌时能剩余的所有牌
int ans[int(5e5 + 10)]; 

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> arr[n - i - 1];
	}
	dp[1].push_back(arr[0]);
	dp[1].push_back(-1);
	ans[dp[1][0]] = 1;
	for(int i = 2;i <= n;i++){
		int next = arr[i - 1];
		int linki = -1;
		for(int j = i - 2;j >= 0;j--){
			if(arr[j] == next){
				linki = j;
				break;
			}
		}
		if(linki == -1){
			for(int j = 0;dp[i - 1][j] != -1;j++){
				dp[i].push_back(dp[i - 1][j]);
				ans[dp[i - 1][j]]++;
			}
			dp[i].push_back(next);
			dp[i].push_back(-1); 
			ans[next]++;
		}
		else{
			for(int j = 0;dp[linki + 1][j] != -1;j++){
				dp[i].push_back(dp[linki + 1][j]);
				ans[dp[linki + 1][j]]++;
			}
			dp[i].push_back(-1);
		}
	}
	cout << ans[1];
	for(int i = 2;i <= m;i++){
		cout << " " << ans[i];
	}
	return 0;
}
