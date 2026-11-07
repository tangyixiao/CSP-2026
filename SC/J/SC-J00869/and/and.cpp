#include<bits/stdc++.h>
using namespace std;
int jz(int a){
	int jg2=0;
	while(a){
		int x=1,y=0,jg1=1;
		while(a>=x*2){
			x=x*2;
			y++;
		}
		for(int i=0;i<y;i++){
			jg1=jg1*10;
		}
		jg2+=jg1;
		a=a-x;
	}
	return jg2;
}
int jz2(int a){
	int jg=0,i=1;
	while(a){
		jg+=a%10*i;
		i=i*2;
		a=a/10;
	}
	return jg;
}
int awy(int a,int b){
	int n,jg1=0,jg2=0,x=0;
	if(a>b){
		n=a;
		a=b;
		b=n;
	}
	while(a){
		jg1=0;
		if(a%10==b%10){
			jg1=1;
		}
		a=a/10;
		b=b/10;
		x++;
		for(int i=0;i<x-1;i++){
			jg1=jg1*10; 
		} 
		jg2+=jg1;
	}
	return jg2;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int m2=m;
	int a[n+5],x[m+5],y[5]={0},u=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	while(m--){
		x[u]=jz(a[n-m]);
		u++;
	}
	while(m2>0){
		y[1]=x[m2];
		y[2]=x[m2-1];
		y[1]=awy(y[1],y[2]);
		m2--;
	}
	cout<<jz2(y[1])<<" ";
	return 0;
} 