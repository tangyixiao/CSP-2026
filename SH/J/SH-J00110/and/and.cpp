#include<bits/stdc++.h>
#define int long long
using namespace std;

int a[500004],n,m,ans;
set<int> Ar,Arnow;

bool check(int k){
	for(int i=1;i<=n;i++){
		if(a[i]&(1<<k)){
			if(Ar.find(i)!=Ar.end()){
				Arnow.insert(i);
			}
		}
	}
	return Arnow.size()>=m;
}

void solve(){
//	cerr<<pow(2,18)<<'\n';
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		Ar.insert(i);
	}	
	for(int i=30;i>=0;i--){
		bool chk=check(i);
//		cerr<<k<<' ';
		if(chk){  // position i of array A can be chosen
			Ar.clear();
			for(int k:Arnow){
				Ar.insert(k);
			}
			ans+=(1<<(i));
		}
		Arnow.clear();
	}
	cout<<ans<<'\n';
}

signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int _T=1;//cin>>_T;
	while(_T--){
		solve();
	}
}
