#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000007],ans[1000007];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m<=2){
		int f1111;
		if(a[n]==1){
			cout<<n<<' ';
			for(int i=1;i<=n;i++){
				if(a[i]==0) f1111++;
			}
			cout<<f1111;
		}
		else if(a[n]==0){
			for(int i=1;i<=n;i++){
				if(a[i]==1) f1111++;
			}
			cout<<f1111<<' '<<n;
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		stack<int> s;
		bool vis[1000007]={};
		for(int j=i;j<=n;j++){
			if(!vis[a[j]]){
				s.push(a[j]);
				vis[a[j]]=true;
			}
			else{
				while(s.top()!=a[j]){
					vis[s.top()]=false;
					s.pop();
				}
			}
		}
		while(s.size()){
			ans[s.top()]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
