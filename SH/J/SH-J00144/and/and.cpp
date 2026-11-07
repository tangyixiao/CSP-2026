#include<bits/stdc++.h>
using namespace std;
bool a[200005][35],as[200005];
int ps2[31]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824};
int m,n;
int recl(int start){
	int cnt=0;
	for(int j=start;j>=0;j--){
		for(int i=1;i<=n;i++){
			if(a[i][j]==1) cnt++;
		}
		if(cnt>m){
			for(int k=1;k<=n;k++){
				if(a[k][j]==0)
					for(int l=0;l<=start;l++) a[k][l]=0;
			}
			return ps2[j]+recl(j-1);
		}if(cnt==m){
			int ans=ps2[j+1]-1;
			for(int i=1;i<=n;i++){
				if(a[i][j]==1) ans=ans&as[i];
			}
			return ans;
		}
	}
	return 0;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int b,size=0,cnt;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>b;
		as[i]=b;
		cnt=0;
		while(b){
			a[i][cnt]=b%2;
			b/=2;
			cnt++;
		}
		size=max(size,cnt);
	}
	cout<<recl(size-1);
}
