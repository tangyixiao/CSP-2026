#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int n, m;
int a[500005];
long long cnt[300005];
int k[500005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++) cin >> a[i];
	for(int i=n;i>=1;i--){
		if(!k[a[i]]) k[a[i]] = i;
	}
	for(int i=1;i<=n;i++){
		int j = i;
		while(j<=n){
			int id = k[a[j]];
			cnt[a[j]]++;
			if(id == j) j++;
			else j = id+1;
		}
	}
	for(int i=1;i<=m;i++) cout << cnt[i] << " ";
	return 0;
}
