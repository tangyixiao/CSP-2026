#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long
signed main(){
	freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	vector<int> a(n+1);
	for(int i=1;i<=n;++i) cin>>a[i];
	vector<int> mp(m+1,-1);
	vector<int> mp1(m+1,0);
	vector<int> d;
	for(int i=1;i<=n;++i){
		while(!d.empty()) d.pop_back();
		for(int i5=1;i5<=m;++i5) mp[i5]=-1;
		for(int j=i;j<=n;++j){
			if(mp[a[j]]!=-1){
				while(d.size()>mp[a[j]]){
					d.pop_back(); 
				}
			}
			mp[a[j]]=d.size();
			d.push_back(a[j]);
		}
	    for(int i1=0;i1<d.size();++i1) mp1[d[i1]]++;
	}
	for(int i=1;i<=m;++i) cout<<mp1[i]<<" ";
	return 0;
}
