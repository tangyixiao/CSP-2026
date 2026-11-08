#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,m,a[200010],ans = 0;

void dfs(int step,int last,int sum){
	if(step > m){
		if(ans < sum){
			ans = sum;
		}
		return ;
	}
	for(int i = last;i <= n - m + step;i++){
		if(sum == -1){
			dfs(step + 1,i + 1,a[i]);
		}else{
			dfs(step + 1,i + 1,(sum & a[i]));
		}
	}
}

signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	dfs(1,1,-1);
	cout << ans;
	return 0;
}

//±©Á¦Æ­·ÖProject Moon 
