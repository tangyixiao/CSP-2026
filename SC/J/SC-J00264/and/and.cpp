#include<bits/stdc++.h>
using namespace std;
int synb=100055;
int sybnb=100055;
int ans=0;
int pc(int n,int a[10086]){
	for(int i=1;i<=10086;i++){
		if(n==a[i]){
			a[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[10086];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	if(m==1){
	for(int i=1;i<=n;i++){
		ans=max(a[i],ans);
	}
		cout<<ans;
	}
	if(m==n){
		for(int i=1;i<=n;i++){
			synb=min(a[i],synb);
		}
		cout<<synb;
	}
	if(m!=n){
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
			ans=max(a[j],ans);
			pc(ans,a);
			
			sybnb=min(sybnb,ans);
			}
		}
		cout<<sybnb;
	}
	
}
