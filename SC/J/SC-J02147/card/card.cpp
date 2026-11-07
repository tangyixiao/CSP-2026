#include<bits/stdc++.h>
//#define int long long
using namespace std;
const int MAX=5e5+5;
int n,m,a[MAX],ans[MAX];
bool f1=true;
void solve(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i-1]>a[i])f1=false;
	}
	if(f1){
		for(int i=1;i<=n;i++){
			int mp[MAX]={};
			for(int j=i;j<=n;j++)mp[a[j]]++;
			for(int j=1;j<=m;j++)ans[j]+=(mp[j]>0);
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i];
			if(i!=m)cout<<' ';
		}
		return;
	}else if(m==1){
		cout<<n<<'\n';
		return;
	}
	for(int i=1;i<=n;i++){
		vector<int>q;
		for(int j=i;j<=n;j++){
			for(auto k:q){
				if(k==a[j]){
					while(q.back()!=k)q.pop_back();
					q.pop_back();
					break;
				}
			}
			q.push_back(a[j]);
		}
		for(auto j:q)ans[j]++;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i];
		if(i!=m)cout<<' ';
	}
}
//#undef int
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int T=1;
//  cin>>T;
	while(T--)solve();
	return 0;
}