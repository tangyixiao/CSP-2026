#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[100][100];
int l[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&l[i]);
	}
	if(n<=20){
		for(int i=1;i<=n;i++){
			a[i][1]=l[i];
		}
		for(int j=2;j<=m;j++){
			for(int i=j;i<=n;i++){
				for(int k=j-1;k<i;k++){
					a[i][j]=max(a[i][j],a[k][j-1]&l[i]);
				}
			}
		}
		int ans=0;
		for(int i=m;i<=n;i++){
			ans=max(ans,a[i][m]);
		}
		cout<<ans;
	}else if(n<=2000){
		if(m==1){
			int ans=0;
			for(int i=1;i<=n;i++){
				ans=max(ans,l[i]);
			}
			cout<<ans;
		}else if(m==n){
			int ans=l[1];
			for(int i=2;i<=n;i++){
				ans=ans&l[i];
			}
			cout<<ans;
		}else if(m==2){
			int ans=0;
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					if(i!=j){
						ans=max(ans,l[i]&l[j]);
					}
				}
			}
			cout<<ans;
		}
	}else{
		if(m==n-1){
			int ans=0;
			for(int i=1;i<=n;i++){
				int tt=INT_MAX;
				for(int j=1;j<=n;j++){
					if(i!=j){
						tt=tt&l[j];
					}
				}
				ans=max(ans,tt);
			}
			cout<<ans;
		}else{
			bool f=true;
			for(int i=1;i<=n;i++){
				int tt=log2(l[i]);
				if(l[i]!=pow(2,tt+1)-1){
					f=false;
					break;
				}
			}
			if(f){
				sort(l+1,l+1+n);
				cout<<l[n-m+1];
			}else{
				bool ff=true;
				for(int i=1;i<=n;i++){
					if(l[i]!=i-1){
						ff=false;
						break;
					}
				}
				if(ff){
					cout<<n-m;
				}else{
					sort(l+1,l+1+n);
					int ans=l[n];
					for(int i=n-1;i>=n-m+1;i--){
						ans=ans&l[i];
					}
					cout<<(ans==0?511:ans);
				}
			}
		}
	}
	return 0;
}