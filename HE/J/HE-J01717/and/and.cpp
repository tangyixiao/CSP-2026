#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long m,n,b,c, e[m+1], f, g, h, k;
	cin>>n>>m;
	long long a[n+1],d[m+1];
	for(int i=1;i<=n;i++){
		cin>>b;
		c=1;
		g=0;
		while(b!=0){
			a[i]+=b%2*c;
			c*=10;
			b/=2;
		}
	}
	for(int i=1;i<=m;i++){
		d[i]=1;
	}
	while(d[m]<=n){
		for(int i=1;i<=m;i++){
			if(d[i]==m+1){
				d[i+1]+=1;
				d[i]=1;
			}
		}
		c=1;
		b=0;
		for(int i=1;i<=m;i++){
			e[i]=a[d[i]];
		}
		while(e!=0||f!=0){
			f=1;
			for(int j=1;j<=m-1;j++){
				if(e[j]%10!=1||e[j+1]%10!=1){
					f=0;
				}
			}
			b+=f*c;
			c*=10;
			for(int i=1;i<=m;i++){
			    e[i]/=10;
		    }
		}
		if(b>g){
			g=b;
		}
	}
	k=1;
	h=0;
	while(g!=0){
		h+=g%10*k;
		k*=2;
		g/=10;
	}
	cout<<h;
	return 0;
}
