#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010],bj[500010];
int d[300010];
int ls[300010],zz[300010];
int r;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>=a[i-1]){
			r++;
		}
	}
	for(int i=n;i>=1;i--){
		if(ls[a[i]]==0){
			ls[a[i]]=i;
		}
	}
	if(r==n){
		for(int i=1;i<=m;i++){
			zz[i]=1e9;
		}
		for(int i=n;i>=1;i--){
			zz[a[i]]=i;
		}
		for(int i=1;i<=m;i++){
			if(zz[i]==1e9) cout<<"0 ";
			else cout<<n-zz[i]+1<<" ";
		}
	}else if(1LL*n*m<=1e7){
		int s=0;
		for(int i=1;i<=n;i++){
			int k=i;
			while(k<=n){
				d[a[k]]++;
				k=ls[a[k]]+1;
			} 
		}
		for(int i=1;i<=m;i++){
			cout<<d[i]<<" ";
		}
	}else{
		
	}
	return 0;
}
