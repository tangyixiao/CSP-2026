#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5,M = 3e5 + 5;
int n,m,a[N],lst[M],nxt[N],ans[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin.tie(0) -> sync_with_stdio(0);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		if(lst[a[i]] != 0)nxt[lst[a[i]]] = i;
		lst[a[i]] = i;
	}
	for(int t = 1;t <= n;t++){
		for(int i = t;i <= n;i++){
			while(nxt[i] != 0)i = nxt[i];
			ans[a[i]]++;
		}
	}
	for(int i = 1;i <= m;i++)cout << ans[i] << ' ';
	cout << endl;
	return 0;
}
