#include<bits/stdc++.h>
using namespace std;
int dfs(int g){
	int t=1;
	for(int i=1;i<=g;i++){
		t*=2;
	}
	return t;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[300000];
	cin>>n>>m;
	int maxx=-1000;
	int zhong=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxx=max(a[i],maxx);
	}
	int y=0;
	while(maxx){
		if(maxx>=dfs(y)){
			y++;
		}
		else{
			break;
		}
	}
	for(int i=y;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(a[j]>=dfs(i)){
				cnt++;
			}
		}
		if(cnt>=m){
			for(int j=1;j<=n;j++){
				a[j]-=dfs(i);
			}
			zhong+=dfs(i);
		}
	}
	cout<<zhong;
	return 0; 
}