#include<bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define fi first
#define se second
const int N = 5e5 + 5;
int n, m, a[N], cnt[N], q[N], mp[N];
inline void cal(int k){
	for(int i=0;i<=n;i++) q[i] = 0, mp[i] = 0;
	for(int i=k;i<=n;i++){
		q[i] = a[i];
		if(mp[a[i]] != 0){
			int l = mp[a[i]];
			int r = i - 1;
			for(int i=l;i<=r;i++){
				mp[q[i]] = 0;
				q[i] = 0;
			}
			mp[a[i]] = 0; 
		}
		mp[a[i]] = i;
	} 
//	for(int i=1;i<=n;i++) cout<<q[i]<<' '; cout<<'\n';
	for(int i=1;i<=n;i++) cnt[q[i]]++;
}
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin.tie(0) -> ios::sync_with_stdio(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n <= 500){
		for(int i=1;i<=n;i++){
			cal(i);
		}
		for(int i=1;i<=m;i++) cout<<cnt[i]<<' ';
		return 0;
	}
	for(int i=1;i<=n;i++){
		if(a[i] != a[i+1]) cnt[a[i]] = i; 
	}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<' ';
	return 0;
}
/*

*/ 
