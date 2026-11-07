#include<bits/stdc++.h>
using namespace std;
long long n,m;
vector<long long> vec;
unordered_map<long long,long long> mp;
auto fiind(long long x,vector<long long>& r){
	if(r.empty()) return r.end();
	for(auto it=r.begin();it<r.end();it++){
		if(*it==x) return it;
	}
	return r.end();
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	vec.resize(n);
	for(long long i=0;i<n;i++){
		scanf("%d",&vec[i]);
	} 
	for(long long i=1;i<=n;i++){
		vector<long long> ar(n);
		for(long long j=i-1;j<n;j++){
			auto it=fiind(vec[j],ar);
			if(it!=ar.end()){
				ar.erase(it,ar.end());
			}
			ar.push_back(vec[j]);
		}
		for(auto val : ar){
			mp[val]++;
		}
	}
	for(long long i=1;i<=m;i++){
		printf("%d ",mp[i]);
	}
	return 0;
}
