#include<bits/stdc++.h>
using namespace std;
int n,a[200005],l,r;
long long ans,tot;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		scanf("%d",&a[i]);
		cin>>c[i];
	}
	l=1,r=n;
	while(l<r){
		if(a[l]<a[r]){
			a[r]-=a[l];
			if(c[l]!=c[r]){
				ans+=(0LL)+a[l];
			}
			l++;
		}else if(a[l]>a[r]){
			a[l]-=a[r];
			if(c[l]!=c[r]){
				ans+=(0LL)+a[r];
			}
			r--;
		}else{
			if(c[l]!=c[r]){
				ans+=(0LL)+a[l];
			}
			l++,r--;
		}
	}
	printf("%lld",ans);
	return 0;
}