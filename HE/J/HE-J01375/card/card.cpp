#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int ans[300005];
int r[300005];
vector<int> v[300005];
int su[500005];
int c[500005];
int cnt[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(v[a[i]].size()!=0){
			su[v[a[i]][v[a[i]].size()-1]]++;
			su[i+1]--;
		}
		v[a[i]].push_back(i);
	}
	for(int i=n;i>=1;i--){
		if(r[a[i]]==0){
		//	ans[a[i]]=i;
			r[a[i]]=i;
		}
	}
	for(int i=1;i<=n;i++){
		c[i]=c[i-1]+su[i];
		cnt[a[i]]++;
		for(int j=1;j<=n;j++){
			cout<<c[j]<<' ';
		}
		if(cnt[a[i]]<v[a[i]].size()){
			su[v[a[i]][cnt[a[i]]]]--;
			su[v[a[i]][cnt[a[i]+1]]+1]++;
		}
		ans[a[i]]++;
		for(int j=1;j<=m;j++){
			if(c[r[j]]==1&&i<=r[j]&&j!=a[i]){
				ans[j]++;
			}
		}
		cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
