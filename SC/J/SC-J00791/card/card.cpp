#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MX=3e5;
int n,m,ans[MX];
vector<int>v,table;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;++i){
		int t;
		cin>>t;
		v.push_back(t);
	}
	for(int i=0;i<n;++i){
		for(int j=i;j<n;++j){
			bool found=0;
			int tar=0;
			for(int k=0;k<table.size();++k){
				if(v[j]==table[k]){
					found=1,tar=k;break;
				}
			}
			if(found){
				for(int k=table.size()-1;k>=tar;--k){
					table.erase(k,k+1);
				}
			}
			table.push_back(v[j]);
		}
		for(int j=0;j<table.size();++j){
			ans[table[j]]++;
		}
	}
	for(int i=0;i<m;++i)cout<<ans[i]<<' ';
	return 0;
}//ran jin le