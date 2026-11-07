#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[300010],note[300010],c[300010][40];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		//全部存为二进制 
		int Q=a[i];
		int cnt=1;
		while(Q){
			c[i][cnt]=Q%2;
			Q/=2;
			cnt++;
		} 
	}
	long long ans=0;
	for(int cnt=30;cnt>=1;cnt--){
		int A=0;
		for(int i=1;i<=n;i++){
			if(c[i][cnt]==1&&note[i]==0){
				A++;
			}
		}
		if(A>=m){
			for(int i=1;i<=n;i++){
				if(c[i][cnt]!=1){
					note[i]=1;
				}
			}
			ans+=(1<<(cnt-1));
		}
	}
	cout<<ans;
	return 0;
} 
