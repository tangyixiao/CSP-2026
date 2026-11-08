#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],dp[500005],tot,books[300005],ans[300005],sums[300005];
bool f = true;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		if(a[i - 1] > a[i]){
			f = false;
		}
		sums[a[i]]++;
	}
	if(f){
		for(int i = 1;i <= m;i++){
			ans[i] = ans[i - 1] + sums[i];
		}
	}else{
		for(int i = 1;i <= n;i++){
			memset(dp,0,sizeof(dp));
			memset(books,0,sizeof(books));
			tot = 0;
			for(int j = i;j <= n;j++){
				if(!books[a[j]]){
					books[a[j]] = 1;
					dp[++tot] = a[j];
				}else{
					while(tot > 0){
						books[dp[tot]] = 0;
						if(dp[tot] == a[j]){
							break;
						}else{
							tot--;
						}
					}
					books[a[j]] = 1;
				}
			}
			while(tot > 0){
				ans[dp[tot--]]++;
			}
		}
	}
	for(int i = 1;i <= m;i++){
		cout << ans[i] << " ";
	}
	return 0;
}
