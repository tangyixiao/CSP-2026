#include<bits/stdc++.h> 
using namespace std;
int n,m,a[500005],b[300005],c[300005],d[500005],sum = 0,ans[300005]; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i <= n;i++){
		cin>>a[i];
	}
	
	memset(ans,0,sizeof(c));
	for(int i = 1;i <= n;i++){
		sum = 0;
		memset(c,0,sizeof(c));
		memset(d,0,sizeof(d));
		for(int j = 1+i-1;j <= n;j++){
			if(c[a[j]] == 0){
				c[a[j]] = 1;
				sum+=2;
				d[sum] = a[j];
				
			}else{
				int k;
				for(k = 1;k <= sum+1;k++){
					if(d[k] == a[j]){
						break;
					}
				}
				for(int z = k;z <= sum+1;z++){
					d[z] = 0;
				}
				sum = k;
				d[sum] = a[j];
			}
		}
		if(i <= m){
			for(int k = 0;k <= sum+1;k++){
				for(int z = 1;z <= m;z++){
					if(d[k] == z){
						ans[z]++;
					}
			}
		}
			
			
		}
	}
	
	for(int i = 1;i <= m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
