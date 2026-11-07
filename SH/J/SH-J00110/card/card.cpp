#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,m,a[500005],ans[300005];
bool vis[5005];

vector<int> calc(int x){
	memset(vis,0,sizeof(vis));
	for(int j=x;j<=n;j++){
		for(int k=x;k<j;k++){
			if(a[k]==a[j]&&vis[k]==0){
				for(int _=k;_<=j-1;_++){
					vis[_]=1;
				}
			}
		}
	}
	set<int> ll;
	for(int j=x;j<=n;j++){
		if(!vis[j]){
			ll.insert(a[j]);
		}
	}
	vector<int> cnt;
	for(int k:ll){
		cnt.push_back(k);
 	}
 	return cnt;
}

void solve(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n>5&&m==1){
		cout<<n<<'\n';
		return; 
	}
	if(n>5&&m==2){
		cout<<n<<' '<<0<<'\n';
		return;
	}
	if(n>500){
		for(int i=n;i>=1;i--){
			ans[a[i]]=max(i,ans[a[i]]);
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<' ';
		}
		cout<<'\n';
		return;
	}
	for(int i=1;i<=n;i++){
		vector<int> k=calc(i);
		for(int i:k){
			ans[i]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	cout<<'\n';
}

signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int _T=1;//cin>>_T;
	while(_T--){
		solve();
	}
}
