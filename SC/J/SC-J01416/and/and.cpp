#include <bits/stdc++.h>
#define ll long long
using namespace std;
int dp[2005][2005];
struct P{
	int x,sum;
}a[200005];

bool cmp(P q,P p){
	return q.sum > p.sum;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int n,m,cnt = 0;
	cin >> n >> m;
	for (int i = 1;i <= n;i++){
		cin >> a[i].x;
	}
	
	if(m == 1){
		int mx = -1e9;
		for (int i = 1;i <= n;i++){
			mx = max(mx,a[i].x);
		}
		cout << mx;
		return 0;
	}else if(m == 2){
		int mx = -1e9;
		for (int i = 1;i <= n;i++){
			for (int j = 1;j < i;j++){
				mx = max(mx,a[i].x&a[j].x);
			}
		}
		cout << mx;
		return 0;
	}
	
	for (int i = 1;i <= n;i++){
		int ans = 0,j = a[i].x;
		while(j > 0){
			ans += j&-j;
			j>>=1;
		}
		a[i].sum = ans;
	}
	sort(a+1,a+n+1,cmp);
	dp[1][1] = a[1].x;
	for (int i = 1;i <= n;i++){
		for (int j = 1;j <= m;j++){
			for (int k = 1;k < j;k++){
				dp[i][j] = max(dp[i][j],dp[i-1][j-k]&a[i].x);
			}
		}
	}
	cout << dp[n][m];
	return 0;
}