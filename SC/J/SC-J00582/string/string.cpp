#include<bits/stdc++.h>
#define int long long
using namespace std;
int t=0;
int n,k,x=0;
int a[200005];
char c[200005];

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		scanf("%s",&c[i]);
	}
	k=n,x=a[n];
	for(int i=1;i<=n;i++){
		
		if(x<=0)
			k--,x=a[k]+x;
		
		if(a[i]>x){
			if(c[i]!=c[k])
				t+=a[k];
			if(c[i]!=c[k-1])
				t=t+a[i]-x;
			x=x-a[i];
			
		}
		else{
			if(c[i]!=c[k])
				t+=a[i];
			x=x-a[i];
		
		}
		
	}
	printf("%lld",t/2);
	return 0;
}