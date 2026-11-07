#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
int a[500010];
int leas[300010];
int ans[500010];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin >> n >> m;
	for(int i = 1;i<=n;i++){
		cin >> a[i];
		leas[a[i]]=i;
	}
	for(int i = 1;i<=n;i++){
		int id=i;
		while(id<=n){
//			cout << a[id] << ' ';
			ans[a[id]]++;
			id=leas[a[id]]+1;
		}
//		cout << '\n';
	}
	for(int i = 1;i<=m;i++){
		cout << ans[i] << ' ';
	}
	return 0;
}