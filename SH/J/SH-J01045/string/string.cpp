#include<bits/stdc++.h>
using namespace std;
char c[200005];
long long l=0,r,n,a[200005],ans=0,linshi=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	} 
	r=n,l=1;
	while(l<=r){
		linshi=0;
		if(a[l]<a[r] && c[l]==c[r]){
			a[r]-=a[l];
			l++;
		}
		else if(a[l]==a[r] && c[l]==c[r]){
			linshi=a[l];
			a[l]-=linshi;
			a[r]-=linshi;
			l++;
			r--;
		}
		else if(a[l]>a[r] && c[l]==c[r]){
			a[l]-=a[r];
			r--;
		}
		else if(a[l]<a[r] && c[l]!=c[r]){
			ans+=a[l];
			a[r]-=a[l];
			l++;
		}
		else if(a[l]==a[r] && c[l]!=c[r]){
			ans+=a[l];
			linshi=a[l];
			a[l]-=linshi;
			a[r]-=linshi;
			l++;
			r--;
		}
		else if(a[l]>a[r] && c[l]!=c[r]){
			ans+=a[r];
			a[l]-=a[r];
			r--;
		}
	}
	cout<<ans<<endl;
} 


