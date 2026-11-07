#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int to[500005];
int ans[500005];
map<int,vector<int>> mp;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mp[a[i]].push_back(i);
	}
	for(int i=1;i<=n;i++){
		int l=0,r=mp[a[i]].size();
		int ans=1e9;
		while(l<=r){
			int mid=(l+r)/2;
			if(mp[a[i]][mid]>i){
				ans=min(ans,mp[a[i]][mid]);
				r=mid-1;
			}
			else{
				l=mid+1;
			}
		}
		if(ans<5e5+5)to[i]=ans;
	}
	for(int i=1;i<=n;i++){
		int j=i;
		while(j<=n){
			if(to[j]!=0){
				j=to[j];
			}
			else{
				ans[a[j]]++;
				j++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
//si lu:mu ni tiao de guo cheng
