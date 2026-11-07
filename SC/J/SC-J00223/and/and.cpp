#include<bits/stdc++.h>
using namespace std;
long long a[10005],n,m,b[10005],c[100005],x,y,z;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=0;i<=n;i++){
			x=max(a[i],x);
		}
	}
	
	else if(m==n){
		while(a[0]!=0){
			c[0]*=10;
			c[0]+=a[0]%2;
			a[0]/=2;
		}
		x=c[0];
		for(int i=1;i<n;i++){
			while(a[i]!=0){
				c[i]*=10;
				c[i]+=a[i]%2;
				a[i]/=2;
			}
			x=x&c[i];
		}
		//输出 
		y=x;
		z=x;
		x=0;
		for(int i=1;i*2<=z;i*=2){
			x+=y%10*i;
			y/=10;
			if(y==0)break;
		}
	}
	cout<<x;
	return 0;
} 