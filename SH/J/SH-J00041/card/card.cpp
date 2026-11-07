#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[50010];
	int ans[30010];
	int z[50010];
	int f[50010];
	int f1=0,f2=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		z[i]=a[i];
	}
	if(m==1){
		cout<<n;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			if(a[i]==a[i+1]){
				ans[a[i]]++;
			}
			else{
				if(a[i]!=a[i+2]){
					ans[a[i+2]]++;
				}
				else{
					ans[1]++;
					ans[2]++;
				}
			}
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i];
		}
		return 0;
	}
	int cnt=n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			a[j]=z[j];
			f[j]=0;
		}
		if(a[i]==a[i+1]){
			ans[a[i]]++;
			continue;
		}
		cnt=n;
		for(int j=i;j<=cnt;j++){
			if(a[j]==-1e9){
				continue;
			}
			for(int k=j+1;k<=cnt;k++){
				if(a[j]==a[k]){
					for(int t=k;t<=cnt;t++){
						a[t]=-1e9;
					}
				}
			}
			a[cnt+1]=a[j];
			cnt++;
		}
		for(int j=i;j<=cnt;j++){
			if(a[j]!=-1e9){
				f[j]=1;
			}
		}
		for(int j=1;j<=n;j++){
			if(f[j]==1){
				ans[a[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
} 
