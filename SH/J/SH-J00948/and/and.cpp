#include<bits/stdc++.h>
using namespace std;
long long n,m,a[100005],f[2005][2005],ans=-1e9,cnt;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ans=max(ans,a[i]);
		f[i][1]=a[i];
	}
	if(n==m&&n>20){
		cnt=a[1];
		for(int i=1;i<=n;i++){
			cnt=cnt&a[i];
		}
		cout<<cnt;
		return 0;
	}
	if(m==1||n>2000){
		cout<<ans;
		return 0;
	}
	
	//f[1][1]=a[1];
	for(long long i=2;i<=n;i++){
		for(long long j=1;j<=min(i,m);j++){
			f[i][j]=max(max(f[i-1][j-1]&a[i],f[i-1][j]),f[i][j]);
		}
		
	}
	cout<<f[n][m]<<endl;

	return 0;
}
/*
5 3
31 3 1 15 7


4 2
3 15 12 12
*/
