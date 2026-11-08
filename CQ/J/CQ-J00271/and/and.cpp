#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500005],c[500005];
int check(int x){
	for(int i=x;i<=n;i++){
		c[i]=a[i];
	}
	for(int i=x;i<=n;i++){
		c[x]=(c[x]&c[i]);
		if(i-x+1==m&&c[x]==a[x])return 1;
	}
	if(c[x]==a[x]&&n-x+1>=m)return 1;
	return 0;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int l=1,r=n,mid=0,ans=0;
	while(l<=r){
		mid=(l+r)/2;
		if(check(mid)==1){
			ans=mid;
			l=mid+1;
		}
		else r=mid-1;
	}
	cout<<a[ans];
	return 0;
} 
