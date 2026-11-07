#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],lst[300005],nu[300005],ans[300005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		lst[a[i]]=i;
		nu[a[i]]++;
	}
	for(int i=1;i<=m;i++){
		for(int j=lst[i];j<=n;j++){
			j=lst[a[j]];
			ans[a[j]]+=nu[i];
		}
	}
	for(int i=1;i<=m;i++) cout << ans[i] << ' ';
	return 0;
}
