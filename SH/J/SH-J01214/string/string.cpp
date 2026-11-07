#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
int n,mi,ms,l,r,i,a[maxn];
long long ans,z,z2;
char c[maxn];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	r=n;
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		cin>>c[i];
		z+=a[i];
	}
	for(i=1;i<=n;i++){
		z2+=a[i];
		if(z2>z/2){
			mi=i;
			ms=a[i]-z2+z/2;
			break;
		}
	}
	for(l=1;l<mi;l++){
		while(a[l]>0){
			if(a[l]>a[r]){
				if(c[l]!=c[r]){
					ans+=a[r];
					a[l]-=a[r];
					r--;
				}
				else{
					a[l]-=a[r];
					r--;
				}
			}
			else{
				if(c[l]!=c[r]){
					ans+=a[l];
					a[r]-=a[l];
					break;
				}
				else{
					a[r]-=a[l];
					break;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
