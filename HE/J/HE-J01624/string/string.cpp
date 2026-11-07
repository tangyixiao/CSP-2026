#include<bits/stdc++.h>
using namespace std;
long long check(long long mid,long long a1[],int n1,char c1[],long long a11_[]){
	int cnt=0;
	for(int i=1;i<=n1/2;i++){
		for(int j=n1;j>=1;j--){
			if(c1[j]==c1[i]) cnt+=a1[j];
			if(a11_[j]>=a1[i]){
				mid-=a1[i];
				for(int k=j;k>=1;k--){
					a11_[k]-=a1[i];
				}
			}
			else{
				a11_[j]=0;
			}
		}
		mid+=cnt;
	}
	if(mid>0) return 1;
	else if(mid==0) return 2;
	return 0;
}
int n;
long long a[200010],a11[200010],l,r,ans,maxx;
char c[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		maxx+=a[i];
	}
	for(int i=maxx;i>=1;i--){
		a11[i]+=a[i]+a11[i+1];
	} 
	l=1;
	r=maxx/2+1;
	while(l<=r){
		long long mid=(l+r)/2;
		if(check(mid,a,n,c,a11)==1){
			ans=mid;
			r=mid-1;
		}
		else if(check(mid,a,n,c,a11)==2){
			cout<<ans;
			return 0;
		}
		else{
			l=mid+1;
		}
	}
	cout<<ans-1;
	
	return 0;
}
