#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+3;
int a[N],b[N][33],sum[33],c[N],two[33],maxx,x,n,m,ans;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		x=a[i];
		int cnt=0;
		while(x!=0){
			b[i][cnt+1]=x%2;
			x/=2;
			cnt++;
		}
	}
	int x=1;
	two[1]=1;
	for(int i=2;i<=31;i++){
		x*=2;
		two[i]=x;
	}
	//0
	for(int i=1;i<=31;i++){
		for(int j=1;j<=n;j++){
			sum[i]+=b[j][i];
		}
	}
	//1
	for(int i=1;i<=31;i++){
		if(sum[i]>=m){
			maxx=i;
		}
	}
	//2
	for(int i=1;i<=n;i++){
		if(b[i][maxx]==1){
			c[i]=1;
		}
	}
	//3.1
	x=maxx;
	ans+=two[maxx];
	for(int i=x-1;i>=1;i--){
		if(sum[i]>=m){
			int cnt=0;
			for(int j=1;j<=n;j++){
				if(c[j]==1&&b[j][i]==1){
					cnt++;
				}
			}
			if(cnt>=m){
				maxx=i; 	
				ans+=two[i];
				for(int j=1;j<=n;j++){
					if(c[j]==1&&b[j][i]==0){
						c[j]=0;
					}
				}
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
