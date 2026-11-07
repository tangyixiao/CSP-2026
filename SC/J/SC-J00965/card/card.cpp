#include<bits/stdc++.h>
using namespace std;

const int N=5e5+50;
int n, m, arr[N], dp[N], cnt[N];
int main()
{
	freopen("card4.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i=1;i<=n;i++) cin >> arr[i];
	if (n <= 500){		
		for (int i=n;i>=1;i--){
			for (int j=i;j<=n;j++){
				if (dp[arr[j]] == 0) dp[arr[j]] = j;
				else {
					int tmp=dp[arr[j]];
					for (int k=1;k<=m;k++) {
						if (dp[k] >= tmp) dp[k] = 0;
					}
					dp[arr[j]] = j;
				}
			}
			for (int j=1;j<=m;j++){
				if (dp[j]) cnt[j]++;
			}
		}
	} else {
		for (int i=n;i>=1;i--){
			dp[arr[i]]++;
			if (arr[i] != arr[i+1] && cnt[arr[i]]==0) cnt[arr[i]]+=i;
		}
	}
	for (int i=1;i<=m;i++) cout << cnt[i] << " ";
	return 0;
}