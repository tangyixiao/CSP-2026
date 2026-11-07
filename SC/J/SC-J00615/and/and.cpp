#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200007];
bool bit[200007][32];
int sum[32];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x,t=0;
		cin>>x;
		a[i]=x;
		while(x>0){
			bit[i][++t]=x&2;//感谢样例3 x&2!=x%2
			x=x>>1;
		}
	}
	for(int i=32;i>=1;i--){
		for(int j=1;j<=n;j++){
			sum[i]+=bit[j][i];
		}
		if(sum[i]>=m){
			for(int j=1;j<=n;j++){
				if(!bit[j][i]){
					swap(bit[j],bit[n]);
					swap(a[j],a[n]);
					n-=1;
				}
			}		
		}	
	}
	int ans=a[1];
	for(int i=1;i<=m;i++){
		ans&=a[i];
	}
	cout<<ans;
	return 0;
}
