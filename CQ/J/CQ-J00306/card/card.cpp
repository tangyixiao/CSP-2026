#include<bits/stdc++.h>
using namespace std;
int n,m,a[500001],b[500001],ans[300001],vis[300001],sum=0,temp=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int t=0;t<n;t++){
		for(int i=1;i<=500000;i++){
			b[i]=0;
		}
		for(int i=1;i<=300000;i++){
			ans[i]=0;
			vis[i]=0;
		}
		sum=0;
		for(int i=1;i<=n;i++){
			if(vis[a[i+t]]==1){
				for(int j=sum;j>=1;j--){
					if(a[i+t]==b[j+t]){
						for(int k=j;k<=sum;k++){
							b[k]=0;
							temp++;
						}
						break;
					}
				}
				sum=sum-temp;
				temp=0;
			}
			b[++sum]=a[i];
			vis[a[i+t]]=1;
			for(int j=1;j<=n;j++){
				++ans[b[j]];
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
