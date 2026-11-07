#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200010],ans,L;
char c[200010];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >>n;
	if(n==1){
		cout <<0;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin >>a[i] >>c[i];
		L+=a[i];
	}
	int mid=(L+1)/2,sum=0,lmax,rmin;
	for(int i=1;i<=n;i++){
		sum+=a[i];
		if(sum==mid){
			lmax=i,rmin=i+1;
			break;
		}
		if(sum>mid){
			if((sum-mid)>(mid-(sum-a[i])-1)){
				a[i]=(sum-mid)-(mid-(sum-a[i])-1);
				lmax=i-1,rmin=i;
			}
			else{
				a[i]=(mid-(sum-a[i])-1)-(sum-mid);
				lmax=i,rmin=i+1;
			}
			break;
		}
	}
	int ls=0,rs=0,l,r=n+1;
	for(l=1;l<=lmax;l++){
		ls+=a[l];
		while(rs+a[r-1]<=ls){
			r--;
			if(c[l]!=c[r]){
				ans+=a[r];
			}
			rs+=a[r];
		}
		if(ls>rs){
			a[r-1]=a[r-1]-(ls-rs);
			if(c[l]!=c[r-1]){
				ans+=(ls-rs);
			}
			rs=ls;
		}
		
	}
	cout <<ans;
	return 0;
}