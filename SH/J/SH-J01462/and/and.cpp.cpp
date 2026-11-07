#include <iostream>
using namespace std;
int main(){
	int c[100000],d[100000],e,f,g,ans=0,h,am=1,z,mx=100000;
	long long a,b;
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>c[i];
	}
	while(am>0){
	for(int i=0;i<=100000;i++){
		d[i]=0;
	}
	
	
	for(int i=1;i<=a;i++){
		e=0;
		h=c[i];
		while(h!=0){
			if(h%2==1){
				d[e]+=1;
			}
			h-=h%2;
			h=h/2;
			e+=1;
		}
	}
	am=0;
	z=b-1;
	for(int i=0;i<mx;i++){
		if(d[i]>z){
		f=i;
		am+=1;
		}
	}
	mx=f;
	if(am!=0){
	
	g=1;
	for(int i=0;i<f;i++){
		g=g*2;
	}
	ans+=g;
	for(int i=1;i<=a;i++){
		h=c[i];
		h=h-h%g;
		h=h/g;
		if(h%2==0){
			c[i]=0;
		}
	}
	}
	}
	cout<<ans;
}
