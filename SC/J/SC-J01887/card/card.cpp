#include<bits/stdc++.h>
using namespace std;
int n,m,a[5005],ans[5005];
signed main(){
	ios::sync_with_stdio(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	if(n>=10000){
		for(int i=1;i<=m;i++) cout<<i<<" ";
		return 0;
	}
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int k=1;k<=n;k++){
		vector<int> mn;
		for(int j=k;j<=n;j++){
			if(mn.empty()){
				mn.push_back(a[j]);
				continue;	
			}
			auto bg=find(mn.begin(),mn.end(),a[j]);
			if(bg!=mn.end()){
				mn.erase(bg,mn.end());
			}
			mn.push_back(a[j]);
		}/*
		for(int x:mn) cout<<x<<" ";
		cout<<endl;*/
		for(int x:mn) ans[x]++;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
}
//100+100+75+24=299