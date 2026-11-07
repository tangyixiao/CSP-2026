#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[5000001];
long long b[5000001];
long long ans[5000001];
long long c[5000001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	for (int i=1;i<=n;i++){
		for (int k=1;k<=n;k++){
			c[k]=0;
		}
		int x=i;
		for (int j=i;j<=n;j++){
			bool f=false;
			for (int k=j;k<j;k++){
				if (b[k]==a[j]){
					f=true;
				}
				if (f==true){
					b[k]=0;
				}
			}
			b[j]=a[j];
		}
		for (int k=i;k<=n;k++){
			for (int l=1;l<=n;l++){
				if (b[k]==a[l]){
					if (c[a[l]]==0){
						ans[a[l]]++;
					}
					c[a[l]]=1;
				}
			}
		}
	}
	for (int k=1;k<=n;k++){
		c[k]=0;
	}
	for (int i=1;i<=n;i++){
		if (c[a[i]]==0){
			cout<<ans[a[i]]<<" ";
			c[a[i]]=1;
		}
		
	}
	return 0;
}
