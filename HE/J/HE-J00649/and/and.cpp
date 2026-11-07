#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n;
	int a[100005];
	int ans=0;
	cin>>n>>m;
	int i=0,j=0,k=0;
	for(i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>ans){
		   	ans=a[i];
		   }	
	}
	
	if(m=1){
		cout<<ans;
	}
	
	int mu;
	ans=0;
	if(m=2){
		for(i=1;i<=n;i++){
			for(j=i+1;j<=n;i++){
			    mu=a[i]&a[j];
				if(mu>ans){
					ans=mu;
				}	
			}
		}
		cout<<ans;
	}
	fclose(stdin);
	fclose(stdout);
	return 0; 
}
