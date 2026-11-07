#include<bits/stdc++.h>
using namespace std;
int a[500005],ans[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	for(int i = 1;i<=n;i++){
		int cnt = 0;
		unordered_map<int,int>mp;
		for(int j = i;j<=n;j++){
			if(mp.count(a[j]) == 0){
				mp[a[j]] = j;
			}else{
				for(int k = mp[a[j]];k<=j;k++){
					mp[a[k]] = 0;
				}
				mp[a[j]] = j;
			}
		}
		for(auto x:mp){
			if(x.second!=0){
				ans[x.first]+=1;
				cout<<x.first<<" ";
			}
		}
		cout<<endl; 
	}
	for(int i = 1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
}
