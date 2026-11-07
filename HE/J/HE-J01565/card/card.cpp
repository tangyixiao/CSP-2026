#include<bits/stdc++.h>
using namespace std;
int a[500005];
int f[300005];
int ans[30005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(f[a[j]]==0){
				f[a[j]]=j;
				ans[a[j]]++;	
			} 
			else{
				int tmp=f[a[j]];
				for(int k=j;k<=n;k++){
					if(f[k]>tmp){
						f[k]=0;
						ans[k--];	
					} 	
				} 
				f[a[j]]=j;
				
			}
		}
		for(int j=i+1;j<=n;j++){
		}
		memset(0,sizeof(f),0);
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
