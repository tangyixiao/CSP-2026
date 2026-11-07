#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N],vis[25],mx=0,shu[4];
void dfs(int k,int ans){	
	if(k>=m){
		mx=max(ans,mx);
		return;
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			vis[i]=1;
			int c=ans&a[i];
			dfs(k+1,c);
			vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;int mmx=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mmx=max(a[i],mmx);
	}
	if(m==1){
		cout<<mmx;
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j){
					mx=max(a[i]&a[j],mx);
				}
			}
		}
		cout<<mx;
	}
	else if(m==n){
		mx=a[1];
		for(int i=2;i<=n;i++){
			mx&=a[2];
		}
		cout<<mx;
	}
	else if(mmx<4){
		for(int i=1;i<=n;i++){
			if(a[i]==0){
				shu[0]++;
			}
			else if(a[i]==1){
				shu[1]++;
			}
			else if(a[i]==2){
				shu[2]++;
			}
			else{
				shu[3]++;
			}
		}
		if(shu[3]>=m)cout<<3;
		else if(shu[3]+shu[2]>=m)cout<<2;
		else if(shu[3]+shu[2]<m&&shu[3]+shu[1]>=m)cout<<1;
		else cout<<0;
	}
	else if(m==n-1){
		
	}
	else if(n>=23){
		sort(a+1,a+1+n);
		cout<<a[n-m+1];
	}
	else{
		for(int i=1;i<=n;i++){
			vis[i]=1;
			dfs(1,a[i]);
			vis[i]=0;
		}
		cout<<mx;
	}
	return 0;
}