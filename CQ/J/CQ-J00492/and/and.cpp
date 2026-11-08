#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N],d[25][25],sum=1;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    	int w=log2(a[i]+1);
    	if(pow(2,w)!=a[i]+1) sum=0;
	}
	if(n==m){
		int sum=a[1];
		for(int i=2;i<=n;i++){
			sum=(sum&a[i]);
		}
		cout<<sum;
	}else if(sum==1){
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
	}else if(n<=20){
		d[1][1]=a[1];
		for(int i=2;i<=n;i++){
			d[i][1]=max(d[i-1][1],a[i]);
		}
		for(int i=2;i<=n;i++){
			for(int j=2;j<=min(m,i);j++){
				d[i][j]=max((d[i-1][j-1]&a[i]),d[i-1][j]);
			}
		}
		cout<<d[n][m];
	}else if(m==1){
		int ans=-1;
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
		cout<<ans;
	}else if(m==2){
		int ans=-1;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,(a[i]&a[j]));
			}
		}
		cout<<ans;
	}else{
		int sum=a[1];
		for(int i=2;i<=n;i++){
			sum=(sum&a[i]);
		}
		cout<<sum;
	}
	return 0;
}

