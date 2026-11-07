#include<bits/stdc++.h>
using namespace std;
int n,l,r;
int a[200005];
char b[200005];
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	} 
	l=1;
	r=n;
	while(l<r){
		if(b[l]==b[r]){
			if(a[l]==a[r]){
				l++;
				r--;
			}else if(a[l]>a[r]){
				a[l]=a[l]-a[r];
				r--;
			}else if(a[l]<a[r]){
				a[r]=a[r]-a[l];
				l++;
			}
		}else{
			if(a[l]==a[r]){
				ans+=a[r];
				l++;
				r--;
			}else if(a[l]>a[r]){
				ans+=a[r];
				a[l]=a[l]-a[r];
				r--;
			}else if(a[l]<a[r]){
				ans+=a[l];
				a[r]=a[r]-a[l];
				l++;
			}
		}
	}
	cout<<ans;
	return 0;
}