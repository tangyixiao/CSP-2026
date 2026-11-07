#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int a;
int path[500005];
int st[300005];
int bj[300005];
int path1[500005];
int w(int a,int b){
	if(a==0){
		for(int i=1;i<=m;i++){
			if(i!=m){
				cout<<st[i]<<" ";	
			}else{
				cout<<st[i];
			}
		}
	}
	for(int i=n-a+1;i<=n;i++){
		path1[i]=path[i];
	} 
	for(int i=n-a+1;i<=n;i++){
		for(int j=n-a;j<=i-1;j++){
			if(path1[i]==path1[j]){
				for(int k=j;k<i;k++){
					path1[k]=0;
				}
			}
		}
	}
	for(int i=n-a+1;i<=n;i++){
		if(path1[i]==0){
			continue;
		}
		st[path1[i]]++;
		bj[path1[i]]=1;
		if(bj[path1[i]]==1){
			continue;
		}
	}
	for(int i=1;i<=m;i++){
		bj[i]=0;
	} 
	
	return w(a-1,b);
	
	
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>path[i];
	} 
	w(n,m);
	
	
	
	return 0;
}
