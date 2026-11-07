#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int idx[M],sum[M];
bool vis[M];
int a[N]; 
vector<int> ans;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		ans.clear();
		memset(vis,false,sizeof(vis));
		memset(idx,0,sizeof(idx));
		int tot=0;
		for(int j=1;j<=i;j++){
			if(!vis[a[j]]){
				vis[a[j]]=true;
				ans.push_back(a[j]);
				idx[a[j]]=tot++;
			}else{				
				for(int k=idx[a[j]]+1;k<ans.size();k++){
					idx[ans[k]]=0;
					vis[ans[k]]=false;
				}
				for(int k=idx[a[j]]+1;k<ans.size();k++){
					ans.pop_back();
				}
				tot=idx[a[j]]+1;
			}
		}
		for(int j=0;j<ans.size();j++){
			if(ans[j]) sum[ans[j]]++;
		}
		for(int j=1;j<i;j++){
			a[j]=a[j+1];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<sum[i]<<' ';
	}
	return 0;
} 