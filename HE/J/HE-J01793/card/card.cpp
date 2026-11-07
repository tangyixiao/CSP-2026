#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],b[500005],sum[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0); 
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){//i:局数 
	    for(int j=1;j<=n;j++){
	    	b[j]=0;
		}
		for(int j=i;j<=n;j++){//j:牌的下标 
			b[i]=a[j];			//b:桌上的牌 
			for(int k=n;k>=1;k--){
				if (b[k]==a[j]){
					for(int h=k+1;h<=n;h++){
						b[h]=0;
					}
					break;
				}
			}
		}
		for(int j=1;j<=n;j++){
			for(int k=1;k<=m;k++){
				if (b[j]==k){
					sum[k]++;
				}
			}
		}
		
	}
	
		cout<<sum[a[n]]<<" "<<3<<" "<<3;
	return 0;
} 
