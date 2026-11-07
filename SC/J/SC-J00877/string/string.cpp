#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200005],sum,b,l,r,ans;
char c[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	b=sum%2;
	sum/=2;
	for(int i=1;i<=n;i++){
		sum-=a[i];
		if(sum<0){
			sum*=-1;
			l=a[i]-sum;
			r=sum-b;
			a[i]=max(l,r)-min(l,r);
			break;
		}
	}
	l=1,r=n;
	while(l<r){
		if(c[l]!=c[r]){
			if(a[l]>a[r]){
				a[l]-=a[r];
				ans+=a[r];
				r--;
			}
			else if(a[l]<a[r]){
				a[r]-=a[l];
				ans+=a[l];
				l++;
			}
			else{
				ans+=a[l];
				a[l]=a[r]=0;
				l++,r--;
			}
		}
		else{
			if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}
			else if(a[l]<a[r]){
				a[r]-=a[l];
				l++;
			}
			else{
				a[l]=a[r]=0;
				l++,r--;
			}
		}
	}
	cout<<ans;
	return 0;
}