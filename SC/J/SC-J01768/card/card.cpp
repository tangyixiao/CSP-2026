#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 5e5 + 5;
//I love ccf very much,more than other thing.
int cnt[N],a[N],ans[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		cnt[a[i]]++;
	}
	for(int i = 1;i <= n;i++){
		for(int j = i;j <= n;j++){
			int p = j + 1;
			ans[a[j]]++;
			if(cnt[a[j]] > 1){
				for(;a[p] != a[j];p++);
				cnt[a[j]] = 1;
				j = p;
			}
//			cout << a[j] << " ";
			
			
		}
//		cout << "\n";
	}
	for(int i = 1;i <= m;i++){
		cout << ans[i] << " ";
	}
	return 0;
}
//	freopen("kards.in","r",stdin);
//	freopen("kards.out","w",stdout);