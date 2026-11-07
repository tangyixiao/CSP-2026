#include <bits/stdc++.h>
using namespace std;
int c,p,t,l,a,b,yyy,zzz,y,z;
int main(){
	freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    char c1,s1[100],c2,s2[100]; 
    cin >>c1>>s1>>c2>>s2;
    if (c1=c2){
    	c+=1;
	}
	if (s1[0,1]=s2[0,1]){
		p+=1;
	}
	if (s1[2]="A"||"B"||"C"){
		a+=1;
	}
	if (s2[2]="A"||"B"||"C"){
		b+=1;
    }
    if(a=b){
    	t+=1;
	}
	s1[3]==yyy;
	s2[3]==zzz; 
	if(yyy=1||-1){
		y+=1; 
	}
	if(zzz=1||-1){
		z+=1; 
	}
	if(z=y){
		l+=1;
	}
	cout <<c<<p<<t<<l;
	return 0;
} 
