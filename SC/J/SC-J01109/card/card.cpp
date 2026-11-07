#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[500005],vis[300005],ans[300005];
vector<int>v[300005];
signed main(){
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	if(n*(m+n)<=100000000){
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			for(int j=1;j<=m;j++)vis[j]=-1;
			vector<int>tmp;
			for(int j=i;j<n;j++){
				if(vis[a[j]]==-1)tmp.push_back(a[j]),vis[a[j]]=tmp.size();
				else{
					for(int k=vis[a[j]];k<tmp.size();){
						vis[tmp[k]]=-1;
						tmp.erase(tmp.begin()+k);
					}
				}
	//			for(auto k:v)cout<<k<<' ';
	//			cout<<'\n';
			}
			for(auto j:tmp)ans[j]++;
	//		cout<<'\n';
		}
		cout<<ans[1];
		for(int i=2;i<=m;i++)cout<<' '<<ans[i];
	}
	else{
		for(int i=0;i<n;i++){
			cin>>a[i];
			v[a[i]].push_back(i);
		}
		for(int i=n-1;i>=0;i--){
			if(ans[a[i]])continue;
			vector<int>tmp;
			for(auto j:v[a[i]]){
				tmp.push_back(1);
				int cnt=j;
				for(int k=j-1;k>=0;k--){
					cnt=k;
					if(v[a[k]].back()>=j&&a[k]!=a[j])break;
					tmp[tmp.size()-1]++;
				}
				if(lower_bound(v[a[i]].begin(),v[a[i]].end(),cnt)-v[a[i]].begin()-1<0)continue; 
				tmp[tmp.size()-1]+=tmp[lower_bound(v[a[i]].begin(),v[a[i]].end(),cnt)-v[a[i]].begin()-1];
			}
			ans[a[i]]=tmp.back();
		}
		cout<<ans[1];
		for(int i=2;i<=m;i++)cout<<' '<<ans[i];
	}
	return 0;
}
