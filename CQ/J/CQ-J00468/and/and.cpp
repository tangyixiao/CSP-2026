#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ma,vis[200005];
void dfs(int d,int t){
	if(t==m){
		ma=max(d,ma);
		return ;
	}
	for(int i=0;i<n;i++){
		if(vis[i]==0){
			vis[i]=1;
			dfs(d&a[i],t+1);
			vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	if(m==1)cout<<a[n-1];
	else if(m==2){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				ma=max(ma,(a[i]&a[j]));
			} 	
		} 
		cout<<ma;
	}else if(m==n){
		ma=a[0];
		for(int i=1;i<n;i++){
				ma&=a[i];
		} 	
		cout<<ma;
	}else if(n<=50){
		for(int i=0;i<n;i++){
			vis[i]=1;
			dfs(a[i],1);
			vis[i]=0;
		}
		cout<<ma;
	}else {
		int t=n;
		while(t%2==0){
			t/=2;
		}
		if(t==1){
			if(m>n/2){
				cout<<0;
			}else{
			int t=0;
			for(int i=1;i<m;i*=2){
					t++;
			}	
			cout<<n-pow(2,t);
			}

		}
	}
	return 0;
}
