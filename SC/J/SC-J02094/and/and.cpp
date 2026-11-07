#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010],mx=(1<<21)-1,mmn=0;
void dfs(int x,bool f,int mm,int mmx){
	
	int mmx1=mmx;
	if(f==1){
		mmx1=mmx&a[x];		
	}
//	cout<<mmx1<<" "<<f<<" "<<x<<" "<<mm<<"\n";
	if(mm<=0||x>=n){
		if(mm<=0&&x<=n){
//			cout<<mmx1<<" "<<x<<"\n";
			mx=max(mmx1,mx);		
		}

		return;
	}
	dfs(x+1,1,mm-1,mmx1);
	dfs(x+1,0,mm,mmx1);
	
	
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx&=a[i];
		mmn=max(mmn,a[i]);
	}
	if(m==1){
		cout<<mmn;
		return 0;
	}
	if(m==2){
		int mmm=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				mmm=max(mmm,a[i]&a[j]);
			}
		}
		cout<<mmm;
		return 0; 
	}
	if(n<=20){
		mx=0;
		dfs(1,1,m-1,a[1]);
		dfs(1,0,m,(1<<21)-1);
		cout<<mx;
		return 0;
	} 
	if(m==n){
		cout<<mx;
		return 0;
	}
	
	cout<<0;
	return 0;
}
