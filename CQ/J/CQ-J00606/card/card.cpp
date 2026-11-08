#include<bits/stdc++.h>
using namespace std;
int a[500005]; 
int n,m; 
bool fl(){
	for(int i=1;i<=n;i++){
		if(a[i]<a[i-1]) return 0;
	}
	return 1;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=500&&m<=200){
		int ans[500]={};
		for(int i=1;i<=n;i++){
			vector<int> pai;
			int mp[500]={};
			pai.push_back(a[i]);
			mp[a[i]]=1;
			for(int j=i+1;j<=n;j++){
				if(mp[a[j]]){
					while(pai[pai.size()-1]!=a[j]){
						mp[pai[pai.size()-1]]=0;
						pai.pop_back();
					}
				}else{
					pai.push_back(a[j]);
					mp[a[j]]=1; 
				}
			}
			for(int k=1;k<=m;k++){
				ans[k]+=mp[k];
			}
		/*	for(auto it : pai) cout<<it<<' ';
			cout<<'\n';*/
		}
		
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<' ';
		}
		return 0;
	}
	if(fl()){
		//A
		int mp[100005]={};
		for(int i=1;i<=n;i++){
			mp[a[i]]=i;
		}
		for(int i=1;i<=m;i++){
			cout<<mp[i]<<' ';
		}
		return 0;
	}
	if(m==2){
		int ans=0,anss=0;
		if(a[n]==1){
			ans=n;
			for(int i=1;i<=n;i++){
				if(a[i]!=1) anss++;
			}
			cout<<ans<<' '<<anss;
		}
		else{
			anss=n;
			for(int i=1;i<=n;i++){
				if(a[i]!=2) ans++;
			}
			cout<<ans<<' '<<anss;
		}
		return 0;
	} 
	//cout<<"rp++";
	return 0;
}/*

4 3
1 2 1 3


´íÎó´úÂë£º
for(int i=1;i<=n;i++){
		int tmp;
		cin>>tmp;
		dt[tmp].push_back(i);
	}
	for(int i=1;i<=m;i++){
		int ans=0;
		if(dt[i].size()==0){
			cout<<0<<' ';
			continue;
		}
		if(dt[i].size()%2==1){
			ans+=dt[i][0];
			for(int j=2;j<dt[i].size();j+=2){
				ans+=(dt[i][j]-dt[i][j-1]); 
			}
		}else{
			for(int j=1;j<dt[i].size();j+=2){
				ans+=(dt[i][j]-dt[i][j-1]); 
			} 
		}
		cout<<ans<<' ';
	} 
*/ 

