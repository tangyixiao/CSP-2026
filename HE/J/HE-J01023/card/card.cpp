#include<bits/stdc++.h> 
using namespace std;
int sum[20005],n,m,a[20005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool f=true;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]){
			f=false;
		}
		sum[i]=i;
	}
	if(f){
		for(int i=1;i<=n;i++){
			cout<<0<<" ";
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=i;i<=n;j++){
			for(int z=i;z<=n;z++){
				if(a[j]==a[z]){
					if(j<z){
						for(int q=j;q<=z;q++){
							sum[q]--;
						}
					}
					else{
						for(int q=z;q<=j;q++){
							sum[q]--;
						}
					}
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<sum[i]<<" ";
	}
	return 0;
}
