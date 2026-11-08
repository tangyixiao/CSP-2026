#include<bits/stdc++.h>
using namespace std;
using t64 =long long;
constexpr t64 max_n = 500000;
t64 n,m;
t64 a[500005];
t64 nxt[500005];
t64 appear[300005];
bool rec[300005];
t64 ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for(int i=1;i<=n;i++)cin >> a[i];
	for(int i=1;i<=m;i++)appear[i] = -1;
	for(int i=n;i>=1;i--){
		nxt[i] = appear[a[i]];
		appear[a[i]] = i;
	}
//	for(int i=1;i<=n;i++)cout << nxt[i]<<' ';cout << endl;
	if(n<=max_n){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++)rec[j]=0;
			int j=i;
			while(j <= n){
//				cout << j << ' ';
				if(nxt[j]!=-1){
					j=nxt[j];
				}
				else{
					if(j<=n)rec[a[j]] = 1;
					j++;
				}
//				cout << j << endl;
			}
			for(int j=1;j<=m;j++)
				if(rec[j])ans[j]++;
		}
		for(int j=1;j<=m;j++)cout << ans[j] << ' ';
	}
	else{
		//right solve
	}
	return 0;
}
/*
4 3
1 2 1 3
*/

