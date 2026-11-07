#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,m;
int l=0,r=0,ans;
int a[N];
bool check(int x){
	int sum=0;
	int y=2147483647;
	for(int i=1;i<=n;i++){
		if((a[i]&y)>=x){
			sum++;
			y&=a[i];
		}
	}
	if(sum>=m) return 1;
	return 0;
}
bool cmp(int x,int y){
	return x>y;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		r=max(r,a[i]);
	}
	sort(a+1,a+1+n,cmp);
	if(m==n){
		ans=a[1];
		for(int i=1;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
	}else if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
		cout<<ans;
	}else if(m==2&&n<=2000){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[j]&a[i]);
			}
		}
		cout<<ans;
	}else{
		while(l<=r){
			int mid=(l+r)/2;
			if(check(mid)){
				l=mid+1;
				ans=mid;
			}else{
				r=mid-1;
			}
		}
		cout<<ans;
	}
	return 0;
}
