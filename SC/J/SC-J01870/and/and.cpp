#include<bits/stdc++.h>
using namespace std;
int n,m,idx,ans;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	vector<vector<int> > a(31);
	unordered_map<int,int> mp;
	for(int i=1;i<=n;i++){
		int x,id=0;
		cin>>x;
		mp[x]=1;
		int t=x;
		while(t){
			if(t%2){
				a[id].push_back(x);
			}
			id++,t>>=1;
		}
	}
	for(int i=30;i>=0;i--){
		int cnt=0;
		for(auto it:a[i]){
			if(mp[it]==idx+1)
				cnt++;
		}
		if(cnt>=m){
			ans+=pow(2,i);
			for(auto it:a[i]){
				if(mp[it]==idx+1)
					mp[it]++;
			}
			idx++;
		}
	}
	cout<<ans;
	return 0;
}