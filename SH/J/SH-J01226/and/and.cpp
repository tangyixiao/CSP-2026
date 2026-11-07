#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],b[200005],mre[200005][31],ct[31],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int j=a[i];
		int cnt=1;
		while(j>0){
			mre[i][cnt]=j%2;
			cnt++;
			j/=2;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=30;j++){
			ct[j]+=mre[i][j];
		}
	}
	for(int j=1;j<=30;j++){
		if(ct[j]<m){
			for(int i=1;i<=n;i++){
				mre[i][j]=0;
			}
		}
	}
	int mul=1;
	for(int i=1;i<=n;i++){
		mul=1;
		for(int j=1;j<=30;j++){
			b[i]+=mre[i][j]*mul;
			mul*=2;
		}
	}
	sort(b+1,b+n+1);
	ans=b[n];
	for(int i=n-1;i>=n-m+1;i--){
		ans&=b[i];
	}
	cout<<ans;
	return 0;
} 
