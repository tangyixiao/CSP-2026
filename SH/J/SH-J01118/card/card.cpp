#include<bits/stdc++.h>
using namespace std;


long long n,m;
long long a[500005],b[500005];
long long ans[300005],c[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	if(n>=5000){
		for(long long i=1;i<=n;i++){
			ans[a[i]]=max(ans[a[i]],i);
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<" ";
		}
		return 0;
	}
	
	for(int i=1;i<=n;i++){
		memset(b,0,sizeof b);
		memset(c,0,sizeof c);
		for(int j=i;j<=n;j++){
		 	b[j]=a[j];
		 	for(int k=i;k<=j;k++){
		 		if(b[k]==b[j]){
		 			for(int o=k;o<j;o++){
		 				b[o]=0;
					}
				}
			}
		} 
		for(int i=1;i<=n;i++){
			c[b[i]]=1;
		}
		for(int i=1;i<=m;i++){
			if(c[i])ans[i]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
