#include <bits/stdc++.h>
using namespce std;
int a[900005];
int m[100005];
int q[100005];
int w=0,e=0;
int r=0;
int y=0;
int z=0;
int f(int a,int b){
	if(a>=b){
		while(a>0){
		q[w++]=a%10;
		a/=10;
	}
	while(b>0){
		q[e++]&=b%10;
		b/=10;
	}
	r=a;
	}else{
	
	while(b>0){
		q[e++]=b%10;
		b/=10;
	}
		while(a>0){
		q[w++]&=a%10;
		a/=10;
	}
	r=b;
	}
	for(int h=0;h<r;h++){
		y+=pow(2,h);
	}
	return y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,greater<int>());
	for(int i=0;i<m;i++){
		m[i]=n[i];
		
		int u=f(m[i],m[i++]);
		f(u,m[i++]);
		z=f(u,m[i++]);
		
	}
	cout<<z;
	return 0;
}