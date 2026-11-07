#include<bits/stdc++.h>
using namespace std;
const int maxn=5e5+7;
int n,m,a[maxn];
map<int,int> ans;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		map<int,int> mp;
		for(int j=i;j<=n;j++){
			if(mp.find(a[j])==mp.end()){
				mp[a[j]]++;
			}else{
				mp.clear();
				mp[a[j]]++;
			}
		}
		for(int j=1;j<=m;j++){
			if(mp.find(j)!=mp.end()&&mp[j]>=1){
				ans[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}