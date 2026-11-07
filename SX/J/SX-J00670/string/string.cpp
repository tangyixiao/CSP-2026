#include<bits/stdc++.h>
using namespace std;
int n,l=1,r,a[200010];
char b[200010];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	r=n;
	for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
	while(l<r){
		if(b[l]-'a'+1==b[r]-'a'+1){
			if(a[l]<a[r]) a[r]-=a[l],a[l]=0,l++;
			else if(a[l]==a[r]) a[r]=0,a[l]=0,l++,r--;
			else a[l]-=a[r],a[r]=0,r--;
		}else{
			if(a[l]<a[r]) ans+=a[l],a[r]-=a[l],a[l]=0,l++;
			else if(a[l]==a[r]) ans+=a[l],a[r]=0,a[l]=0,l++,r--;
			else ans+=a[r],a[l]-=a[r],a[r]=0,r--;
		}
	}
	cout<<ans;
	return 0;
}