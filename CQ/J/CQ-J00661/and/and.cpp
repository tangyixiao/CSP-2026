#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int ans;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n==m){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];	
		}
		cout<<ans;
		return 0;
	}
	if(m==1){
		ans=-3;
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
		cout<<ans;
		return 0;
	}
	if(n<=2000){
		ans=-1;
		if(m==2){
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					ans=max(ans,a[i]&a[j]);
				}
			}
		}
		if(m==3){
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					for(int k=1;k<=n;k++){
						ans=max(ans,a[i]&a[j]&a[k]);
					}
				}
			}
		}
		if(m==4){
			for(int h=1;h<=n;h++){
				for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					for(int k=1;k<=n;k++){
						ans=max(ans,a[i]&a[j]&a[k]&a[h]);
					}
				}
			}
			}
		}
		if(m==5){
			for(int g=1;g<=n;g++){
				for(int h=1;h<=n;h++){
				for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					for(int k=1;k<=n;k++){
						ans=max(ans,a[i]&a[j]&a[k]&a[h]&a[g]);
					}
				}
			}
			}
			}
		}
		if(m==6){
			for(int f=1;f<=n;f++){
				for(int g=1;g<=n;g++){
				for(int h=1;h<=n;h++){
				for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					for(int k=1;k<=n;k++){
						ans=max(ans,a[i]&a[j]&a[k]&a[h]&a[g]&a[f]);
					}
				}
			}
			}
			}
			}
		}
		if(m==7){
			for(int d=1;d<=n;d++){
				for(int f=1;f<=n;f++){
				for(int g=1;g<=n;g++){
				for(int h=1;h<=n;h++){
				for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					for(int k=1;k<=n;k++){
						ans=max(ans,a[i]&a[j]&a[k]&a[h]&a[g]&a[f]&a[d]);
					}
				}
			}
			}
			}
			}
			}
		}
	}
	sort(a+1,a+1+n,cmp);
	cout<<a[m];
	return 0;
} 
