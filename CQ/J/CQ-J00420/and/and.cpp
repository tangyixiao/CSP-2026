#include<bits/stdc++.h>
using namespace std;
void fast(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}
const int N=2e5+5;
int n,m;
int a[N];
bool vis[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	fast();
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans=0;
	for(int j=30;j>=0;j--){
		int cnt=0;
		vector<int> e;
		for(int i=1;i<=n;i++){
			if(vis[i]){
				continue;
			}
			if(a[i]&(1<<j)){
				cnt++;
			}
			else{
				e.push_back(i);
			}
		}
		if(cnt>=m){
			ans+=(1<<j);
			for(int i:e){
				vis[i]=1;
			}
		}
	}
	cout<<ans;
	return 0;
}

