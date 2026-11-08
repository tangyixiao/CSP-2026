#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e5+10;
int n,m;
int a[N];
bool solve(int s){
	long long c=0,sum=0;
	for(int i=1;i<=n;i++){
		c+=a[i];
		if(i>=s){
			sum=(a[i]*s)-c;
			if(sum<=m){
				return 1;
			}
			c-=a[i-s+1];
		}
	}
	return 0;
}
signed main(){
	freopen("crystal.in","r",stdin);
	freopen("crystal.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	int l=1,r=n,ans=0;
	while(l<=r){
		int mid=(l+r)/2;
		if(solve(mid)){
			l=mid+1;
			ans=mid;
		}
		else{
			r=mid-1;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
