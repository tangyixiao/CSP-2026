#include<bits/stdc++.h>
using namespace std;
long long a[200000]={0},ma=0,n,j=0,m;
long long d(long long f,long long b,int r,long long h){
	int y[32],g[32],s=0,c=0;
	long long x=0;
	for(;f!=0;){
		y[s]=f%2;
		f-=f%2;
		f/=2;
		s++;
	}
	for(;b!=0;){
		g[c]=b%2;
		b-=b%2;
		b/=2;
		c++;
	}
	for(int i=0;i<=min(s,c);i++){
		if(y[i]==g[i]&&y[i]==1){
			x+=pow(2,i);
		}
	}
	if(r==h){
		return x;
	}else{
		r++;
		long long v=j;
		return d(x,a[v+1],r,h);
	}
}
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(long long i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			long long p=d(a[i],a[j],2,m);
			if(ma<=p){
				ma=p;
			}
		}
	}
	cout<<ma;
	return 0;
}
