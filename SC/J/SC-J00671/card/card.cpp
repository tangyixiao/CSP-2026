# include <bits/stdc++.h>
# define int long long
# define endl "\n"
using namespace std;

const int N = 5e5 + 10;
const int M = 3e5 + 10;

int n, m;
int a[N], diff[N], ans[M], Aps[M], Ato[N];

deque<int> pl[M];

//void solveA(){
////	a[n] = n;
////	for(int i=n-1;i>=1;i--){
////		Ato[i] = i;
////		if(a[i] == a[i+1]){
////			Ato[i] = Ato[i+1];
////		}
////	}
//	
//	for(int i=1;i<=n;i++){
//		// i ~ n
//		Aps[a[i]] ++;
//	}
//	return ;
//}

void solve(){
	for(int i=1;i<=m;i++){
		diff[pl[a[i]].front()] ++;
		diff[pl[a[i]].back()] --;
	}
	
	for(int i=1;i<=n;i++){
		// remove i-1
		if(i-1 && pl[a[i-1]].size()){
			pl[a[i-1]].pop_front();
			if(pl[a[i-1]].size())
				diff[pl[a[i-1]].front()] ++;
		}
		
		int ps = 0;
		for(int j=i;j<=n;j++){
			ps += diff[j];
			if(ps == 0){
				ans[a[j]] ++;
			}
		}
	}
	
	for(int i=1;i<=m;i++){
		cout << ans[i] << " ";
	}
	return ;
}

signed main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	bool fA = true;

	cin >> n >> m;
	
	for(int i=1;i<=n;i++){
		cin >> a[i];
		pl[a[i]].push_back(i);
//		if(i >= 2 && a[i] < a[i-1]){
//			fA = false;
//		}
	}
	
//	if(fA){
//		solveA();
//	} else {
		solve();
//	}

	return 0;
}

