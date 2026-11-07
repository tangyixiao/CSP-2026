#include<bits/stdc++.h>
 using namespace std;
int a[200002]={0};
bool book[200002]={0};
int axn;
int m,n;
 void dfs(int now,int step,int g){	
 if(now>axn&&step==m){
		axn=now;
	}
	if(step>m){
		return;
	} 	
	if(now==-1){
		now=1073741823;
	}
	for(int i=1;i<=n;i++){
		if(book[i]==1) continue;
		int k=now&a[i];
		book[i]=1;
		dfs(k,step+1,i);
		book[i]=0;
	}
 } 
  int main(){	
  	ios::sync_with_stdio(false);
  	cin.tie(0);
  	cout.tie(0);
  	freopen("and.in","r",stdin);
  	freopen("and.out","w",stdout);  
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	axn=-2;
	dfs(-1,0,1);	
	cout<<axn;
  	return 0;
  }