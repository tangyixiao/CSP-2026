#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],c[200005],zh,zo,x,ans,m;
char z;
int main(){
//	freopen("string.in","r",stdin); 
//	freopen("string.out","w",stdout); 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>z;
		a[i]+=a[i-1];
		c[i]=z;
	}
	a[n+1]=a[n];
	if(a[n]%2==0) zh=a[n]/2;
	else zh=a[n]/2+1;
	for(int i=1;i<=n;i++){
		if(a[i]>=zh){
			x=i;
			break;
		}
	}
	long a1=x-1,b1=x,u=zh,v=zh;
	for(int i=1;i<n;i++){
	    if(c[i]==c[i+1]) m++;
	}
	if(m+1==n){
		cout<<ans;
		return 0;
	}
	while(a1>=0){
		long e,f=a[b1]-v;
		if(a[n]%2==0) e=u-a[a1];
		else e=u-a[a1]-1;
		if(c[a1+1]==c[b1]){
			if(e>=f){
				v+=e-f;
				ans+=e-f;
			}else {
				u-=f-e;
				ans+=f-e;
			}
			u-=e,v+=f;	
		}else { 
			ans+=min(e,f);
			if(e>=f){
				v+=f;
				u-=f;
			}else {
				u-=e;
				v+=e;
			}
		}
	    if(e==0){
			a1--;
			v-=f;
		}else if(f==0){
			b1++;
			u+=e;
		}else{
			a1--,b1++;
		}
	}if(ans>0) cout<<ans;
	else cout<<0-ans;
	return 0;
}

