#include<bits/stdc++.h>
using namespace std;
long long a,k=1,m=1,k1=1,m1,zd,z=0,zs;
long long b[20001],d[20001];
char c[20001],e[20001];
int f(int x,int y){
	if(x<=y&&zs>2){
		
		z=z+x;
		y=y-x;
		if(y==0){
			zs=zs-2;
			k1=k1+1;
			m1=m1-1;
			return f(d[k1],d[m1]);
		}
		else{
			k1=k1+1;
			zs=zs-1;
			return f(d[k1],y);
		}
		
	}
	else if(zs>2){
	
		z=z+y;
		x=x-y; 
		if(x==0){
			zs=zs-2;
			k1=k1+1;
			m1=m1-1;
			return f(d[k1],d[m1]);
		}
		else{
			zs=zs-1;
			m1=m1-1;
			
			return f(x,d[m1]);
		}
		
	}
	if(zs==2){
		if(x<=y){
			z=z+x;
			
			cout<<z;
			return 0;
		}
		else{
			z=z+y;
			
			cout<<z;
			return 0;
		}
		
	}
	if(zs==1){
		cout<<z;
		return 0;
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

cin>>a;

for(int i=1;i<=a;i++){
		cin>>b[i]>>c[i];
}
	for(int i=1;i<=a;i++){
if(c[i]==c[i+1]){
	b[i+1]=b[i+1]+b[i];
	b[i]=0;
}

	}
		for(int i=1;i<=a;i++){
if(b[i]>=1){
	d[k++]=b[i];
	e[m++]=c[i];
	
}

	}
	m1=k-1;
	zd=k-1;
	zs=(k-1);
	if(k<=2){
		cout<<"0";
	}	
else if(k==3){
	if(d[1]<=d[2]){
		cout<<d[1];
	}
	else{
		cout<<d[2];
	}
}
else{
	
	
				f(d[k1],d[m1]);
		
	
	
} 
}
 

