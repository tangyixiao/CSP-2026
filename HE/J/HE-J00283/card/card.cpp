#include<bits/stdc++.h>
using namespace std;
const int N=2e6+5;
int ans[N],a[N];
int n;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int m;cin>>n>>m;
	for (int i=1;i<=n;++i)cin>>a[i];
	for (int i=1;i<=n;++i){
		vector<int>mp(m*5);vector<int>v;
		for (int j=i;j<=n;++j){
			if (mp[a[j]]){
				while (a[v.back()]!=a[j]){
					mp[a[v.back()]]=0;
					v.pop_back();
				}
				v.pop_back();
				v.push_back(j);
				mp[a[j]]=1;
			}
			else {
				v.push_back(j);
				mp[a[j]]=1;
			}
		}
		for (auto k:v)ans[a[k]]++;
	}
	for (int i=1;i<=m;++i)cout<<ans[i]<<((i==m)?"":" ");
	return 0;
} 
