#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200005],ans,l;
char c[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		l+=a[i];
	}
	int l=1,r=n;
	while(l<=r){
		if(c[l]!=c[r]){
			if(a[l]==a[r]){
				ans+=a[r];
				a[l]=a[r]=0;
				l++;
				r--;
			}else{
				int p=(a[l]<a[r] ? l : r);
				int d=a[p];
				a[l]-=d;
				a[r]-=d;
				if(a[r]==0) r--;
				else l++;
				ans+=d;
			}
		}else{
			if(a[l]==a[r]){
				a[l]=a[r]=0;
				l++;
				r--;
			}else{
				int p=(a[l]<a[r] ? l : r);
				int d=a[p];
				a[l]-=d;
				a[r]-=d;
				if(a[r]==0) r--;
				else l++;
			}
		}
	}
	cout<<ans;
	return 0;
}
