#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
long long n,m,a[N],dp[N],ma=0,o,u,sum;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	sum=n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int q=1;q<=m-1;q++){
		ma=0;
		for(int i=1;i<=sum;i++){
			for(int j=1;j<=sum;j++){
				if(i!=j){
					if(a[i]&a[j]>ma){
						ma=max(ma,a[i]&a[j]);
						o=i;
						u=j;
					}
					
				}
			}
		} 
		a[o]=a[o]&a[u];
		a[u]=a[sum];
		sum--;
	}
	cout<<ma;
	return 0;
} 