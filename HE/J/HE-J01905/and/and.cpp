#include<bits/stdc++.h>
using namespace std;
int m,n;
int a[200001];
int f[21][21];
int ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i =1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);
	if(m==1){
		cout<<a[n];
		return 0;
	}
	if(m==n){
		ans=a[1];
		for(int i = 2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		for(int i = 1;i<n;i++){
			for(int j = i+1;j<=n;j++){
				int c=a[i]&a[j];
				ans=max(ans,c);
			}
		}
		cout<<ans;
		return 0;
	}
	for(int k =1;k<=m;k++){
		f[k][k]=a[1];
		for(int i = 2;i<=m;i++){
			int r=f[k][k]&a[i];
			f[k][k]=r;
		}
		for(int i = k+1;i<=n;i++){
			for(int j=i-1;j>=1;j--){
				int d=f[k][j]&a[i];
				f[k][i]=max(f[k][i],d);
			}
			f[k][i]=max(f[k][i],f[k][i-1]);
		}
	}
	for(int i =1;i<=m;i++){
		for(int j = 1;j<=n;j++){
			cout<<f[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<f[m][n];
	return 0;
}
