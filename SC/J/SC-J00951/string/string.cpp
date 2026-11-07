#include<bits/stdc++.h>
using namespace std;
int n;
long long a[200010];
char c[200010];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int l=1,r=n;
	while(l<=r){
		if(c[l]==c[r]){
			if(a[l]<a[r]){
				a[r]-=a[l];
				l++;
			}
			else if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}
			else if(a[l]==a[r]){
				a[l]=0;
				a[r]=0;
				l++;
				r--;
			}
		}
		else{
			if(a[l]<a[r]){
				a[r]-=a[l];
				ans+=a[l];
				l++;
			}
			else if(a[l]>a[r]){
				a[l]-=a[r];
				ans+=a[r];
				r--;
			}
			else if(a[l]==a[r]){
				ans+=a[l];
				a[l]=0;
				a[r]=0;
				l++;
				r--;
			}
		}
	}
	cout<<ans;
	return 0;
}
