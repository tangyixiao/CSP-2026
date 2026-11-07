#include<bits/stdc++.h>
using namespace std;
int n;
long long a[200005];
long long sum[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld %c",&a[i],&c[i]);
		sum[i]=sum[i-1]+a[i]; 
	}
	long long ans=0;
	double mid=sum[n]/2.0;
	int l=1,r=n;
	while(sum[l]<mid&&sum[r-1]>mid){
		if(c[l]==c[r]){
			if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}else if(a[l]<a[r]){
				a[r]-=a[l];
				l++;
			}else{
				r--;
				l++;
			}
		}else{
			if(a[l]>a[r]){
				a[l]-=a[r];
				ans+=a[r];
				r--;
			}else if(a[l]<a[r]){
				a[r]-=a[l];
				ans+=a[l];
				l++;
			}else{
				ans+=a[l]; 
				r--;
				l++;
			}
		}
	}
	if(sum[l]>=mid){
		double y=sum[l]-mid;
		double x=a[l]-y;
		if(c[l]!=c[l+1]){
			ans+=fabs(x-y);
		}
	}else{
		double y=mid-sum[r-1];
		double x=a[r]-y;
		if(c[r]!=c[r-1]){
			ans+=fabs(x-y);
		}
	}
	cout<<ans;
	return 0;
} 