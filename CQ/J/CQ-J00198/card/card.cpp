#include<bits/stdc++.h>
using namespace std;

const int N=5*1e5+5;
int n,m,a[N],cnt[N];
unordered_map<int,int> j;

struct NUM{
	int v,id;
};
vector<NUM> v;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	v.push_back({-1,-1});
	for(int i=1;i<=n;++i) cin>>a[i];
	for(int i=1;i<=n;++i){
		for(int k=i;k<=n;++k){
			if(j[a[k]]<1){
//				if(a[k]==a[k+1]){
//					++k;
//					continue;
//				}
				v.push_back({a[k],k}),j[a[k]]=v.size()-1;
				++cnt[a[k]];
			}else{
				for(;j[a[k]]+1<v.size();){
					j[v[v.size()-1].v]=0;
					--cnt[v[v.size()-1].v];
					v.pop_back();
				}
			}
		}
		v.clear(),v.push_back({-1,-1}),j.clear();
	}
	for(int i=1;i<=m;++i) cout<<cnt[i]<<" "; 
	return 0;
}
