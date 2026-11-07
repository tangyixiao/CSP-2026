#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005];
vector<int> ve[300005];
signed main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ve[a[i]].push_back(i);
	}
	for(int st=1;st<=n;st++){
		int la=ve[a[st]][ve[a[st]].size()-1]+1;
		ans[a[st]]++;
		while(la<=n){
			ans[a[la]]++;
			la=ve[a[la]][ve[a[la]].size()-1]+1;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
