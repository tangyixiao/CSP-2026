#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500005],ans[300005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		map<int,bool> mp;
		deque<int> d;
		for(int j=i;j<=n;j++){
			if(!(mp.count(a[j]) && mp[a[j]]==1)){
				d.push_back(a[j]);
				mp[a[j]]=1;
				continue;
			}
			while(!d.empty()){
				if(d.back()==a[j]){
					d.pop_back();
					break;
				}else d.pop_back();
			}
			d.push_back(a[j]);
			mp[a[j]]=1;
		}
		while(!d.empty()){
			ans[d.front()]++;
			d.pop_front();
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
