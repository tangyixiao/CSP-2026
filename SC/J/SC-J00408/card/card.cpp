#include<bits/stdc++.h>
using namespace std;
//int nums[200005];
int res[200005];
int vis[200005];
int zb[200005];
bool vis2[200005];
int nums[200005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		cin>>nums[i];
	}
	
	for(int i=1;i<=n;i++){
		if(vis[nums[i]]!=0){
			for(int j=zb[nums[i]];j<=i;j++){
				vis2[nums[i]]=false;
			}
		}
		else{
			zb[nums[i]]=i;
			vis[nums[i]]++;
		}
		res[nums[i]]++;
	}
	for(int i=1;i<=m;i++){
		cout<<res[i]<<' ';
	} 
	return 0;
}
