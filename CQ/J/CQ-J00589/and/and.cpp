#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],h,maxn=-1;
void xh(int cs,long long dq,int zd){
	if(cs==0){
		maxn=max(maxn,dq);
		return;
	}
	if((n-zd+1)<cs){
		return;
	}
	for(int i=(zd+1);i<=n;i++){
		if((n-i+1)<cs){
			return;
		}
		if(cs==m){
			xh(cs-1,a[i],i);
		}else{
			xh(cs-1,dq&a[i],i);
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		if(i==1){
			h=a[i];
		}
		h=h&a[i];
	}
	if(m==n){
		cout<<h;
		return 0;
	}
	xh(m,0,0);
	printf("%lld",maxn);
	return 0;
}
