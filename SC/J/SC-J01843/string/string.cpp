#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],l=1,r,ans=0;
char b[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	r=n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	for(;;){
		if(a[l]>a[r]){
			if(b[l]!=b[r]){
				ans+=a[r];
			}
			a[l]-=a[r];
			a[r]=0;
			r--;
		}
		else if(a[l]<a[r]){
			if(b[l]!=b[r]){
				ans+=a[l];
			}
			a[r]-=a[l];
			a[l]=0;
			l++;
		}
		else if(a[l]==a[r]){
			if(b[l]!=b[r]){
				ans+=a[l];
			}
			a[r]=0;
			a[l]=0;
			l++;r--;
		}
		if(l>=r){
			break;
		}
	}
	cout<<ans;
	return 0;
}