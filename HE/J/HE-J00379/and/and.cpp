#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int N=2e5+100,M=(1<<30)-1;
int n,m,a[N],b[35],ans;
map<int,int> vis;
set<int> s;
vector<pair<int,int> > G[35];
map<int,int> op;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;int ma=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];int op=a[i],k=0;ma=max(ma,a[i]);
		while(op){
			if(op%2)b[k]++,G[k].push_back({a[i],i});
			op/=2;k++;
		}
	}if(m==1){cout<<ma<<'\n';return 0;
	}
	bool f=0;int tot=0;
	for(int i=32;i>=0;i--){int cnt=0;
		if(b[i]>=m&&!f){tot++;f=1;
			for(auto j:G[i])if(op[j.first]==0)vis[j.first]++,op[j.first]=1;
		}
		else if(b[i]>=m){
			for(auto j:G[i]){
				if(vis[j.first]==tot&&op[j.first]!=i){
					vis[j.first]++;cnt++;op[j.first]=i;
				}
			}tot++;
			if(cnt<m){
				for(auto j:G[i]){
					if(vis[j.first]==tot&&op[j.first]==i){
						vis[j.first]--;cnt--;op[j.first]=i-1;
					}
				}tot--;
			}
		}
//		for(int j=1;j<=n;j++){
//			cout<<vis[a[j]]<<' ';
//		}
//		cout<<tot<<'\n';
	}ans=(1<<30)-1;int op=0;
	for(int i=1;i<=n;i++){
		if(vis[a[i]]==tot){
			ans=ans&a[i];
//			cout<<a[i]<<'\n';
		}
	}
	cout<<ans;
	return 0;
}
