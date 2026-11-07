#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,t,floor=0;
	cin>>n>>m;
	vector<bool> com(m+1,0);
	vector<int> ans(m+1,0);
	int cp[n];
	for(int i=0;i<n;i++){
		cin>>cp[i];
	}
	if(n==m){
		for(int i=1;i<=n;i++){
			cout<<i<<" ";
		}
		return 0;
	}
	for(int j=0;j<n;j++){
		floor=j;
		for(int i=floor;i<n;i++){
			t=cp[i];
			if(com[t]==1){
				floor=i;
			}
			com[t]=1;
		} 
		for(int i=floor;i<n;i++){
			t=cp[i];
			ans[t]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
