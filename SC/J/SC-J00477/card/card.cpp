#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[5005],ans[3005],f[5005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	if(m==1){
		cout<<n;
	}
	else{
		memset(ans,0,sizeof(ans));
		memset(f,0,sizeof(0));
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				int t;
				for(int k=1;k<i;k++) f[k]=1;
				for(int k=1;k<=j;k++){
					if((a[k]==a[j])&&(f[k]!=1)) {
						t=k;
						continue;
					}
				}
				for(int k=t;k<j;k++){
					f[k]=1;
				}
			}
			for(int j=i;j<=n;j++){
				if(f[j]==0){
					ans[a[j]]++; 
				} 
			}
			memset(f,0,sizeof(0));
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<" "; 
		}
	}
	return 0;
}