#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	vector<int> a(n+2,0);
	vector<int> cnt(m+1,0);
	vector<int> last(m+2,0);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cnt[a[i]]++;
		last[a[i]]=i;
	}
	int end=0;
	for(int i=1;i<=m;i++) end=min(end,last[i]);
	vector< vector<int> > ans(m+2,vector<int>(m+2,0));
	for(int i=n;i>=1;i--){
		if(i<end) break;
		if(i<last[a[i]]) continue;
		ans[a[i]]=ans[a[i+1]];
		ans[a[i]][a[i]]++;
	}
	vector<int> sum(m+1,0);
	for(int i=1;i<=m;i++){
		for(int j=1;j<=m;j++){
			sum[i]+=ans[j][i]*cnt[j];
		}
		cout<<sum[i]<<" ";
	}
	return 0;
}
