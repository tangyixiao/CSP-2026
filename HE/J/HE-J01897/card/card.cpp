#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500009];
int ans[300009];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	bool f[300009];
	for(int i=1;i<=n;i++){
	    //for(int oo=1;oo<=m;oo++)f[oo]=0;
		for(int j=i;j<=n;j++){
		    for(int k=1;k<=m;k++){
				if(a[j]==k&&f[k]==0){
					f[k]=1;
				}
		   }
		}
		for(int k=1;k<=m;k++){
				if(f[k]==1){
					f[k]=0;
					ans[k]++;
				}
		}   
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
