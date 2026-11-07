#include<bits/stdc++.h>
using namespace std;
int a[100005][31],b[31]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},vis[100005],k,n,m,Max=0,zhi;
void yu(){
	k=0;
	memset(vis,0,sizeof vis);
	for(int i=0;i<31;i++){
		b[i]=1;
	}
	if(k==m){
		return ;
	}
	k++;
	for(int i=0;i<n;i++){
		if(vis[i]==1){
			continue;
		}
		vis[i]=1;
		for(int j=0;j<31;j++){
			if(a[i][j]==0){
				b[j]=0;
				yu();
			}
		}
	}
	for(int i=0;i<31;i++){
		if(b[i]==1){
			int cnt=1;
			for(int j=1;j<=n;j++){
				cnt*=2;
			}
			zhi+=cnt;
		}
	}
	if(zhi>Max){
		Max=zhi;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	memset(b,1,sizeof b);
	for(int i=0;i<n;i++){
		long long s;
		cin>>s;
		int j=0;
		while(s!=0){
			if(s%2==1){
				a[i][j]=1;
			}else{
				a[i][j]=0;
			}
			s/=2;
		}
	}
	yu();
	cout<<Max;
	return 0;
}
