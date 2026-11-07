#include<bits/stdc++.h>
using namespace std;

int n, m, a[500003], g[300003];
bool use[300003], na;

void ref(){
	for(int i=1;i<=m;i++){
		use[i]=false;
	}
}

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin>>n>>m;
	
	na=true;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i>=2&&a[i]<a[i-1]) na=false;
	}
	
	//ÐÔÖÊA 
	if(na){
		a[n+1]=-1;
		for(int i=1;i<=n;i++){
			if(a[i]!=a[n+1]){
				g[a[i]]=i;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<g[i]<<" ";
		}
		return 0;
	}
	
	for(int i=1;i<=n;i++){
		int s=i;
		stack<int> cd;
		while(s<=n){
			if(use[a[s]]){
				while(cd.top()!=a[s]&&!cd.empty()){
					use[cd.top()]=false;
					cd.pop();
				}
				cd.pop();
			}
			cd.push(a[s]);
			use[a[s]]=true;
			s++;
		}
		while(!cd.empty()){
			g[cd.top()]++;
			cd.pop();
		}
		ref(); 
	} 
	for(int i=1;i<=m;i++){
		cout<<g[i]<<" ";
	}
	return 0;
}
