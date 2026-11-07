#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	bool tf=true;
	cin>>n>>m;
	vector<int> a(n),jg(n),ans(m);
	for(int i=0;i<n;++i){
		cin>>a[i];
		--a[i];
		if(i){
			if(!(a[i]>=a[i-1])){
				tf=false;
			}
		}
	}
	if(tf){
		vector<int> w(n,-1);
		for(int i=0;i<n;++i){
			w[a[i]]=i;
		}
		for(int i=0;i<m;++i){
			cout<<w[i]+1<<' ';
		}
		return 0;
	}
	for(int i=0;i<n;++i){
		vector<char> f(m);
		for(int j=i;j<n;++j){
			if(f[a[j]]){
				while(f[a[j]]){
					f[jg[jg.size()-1]]=false;
					jg.pop_back();
				}
			}
			jg.push_back(a[j]);
			f[a[j]]=true;
		}
		for(int j=0;j<m;++j){
			if(f[j]){
				++ans[j];
			}
		}
	}
	for(int i=0;i<m;++i){
		cout<<ans[i]<<' ';
	}
	return 0;
}