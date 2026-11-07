#include<bits/stdc++.h>
using namespace std;
string a1,b1,a2,b2;
int a=1,b=1,c=1,d=1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>b1>>a2>>b2;	
	for(int i=0;i<=2;i++){
		if(i>=0&&i<=1){
			if(a1[i]!=a2[i]){
				a=0,b=0,c=0,d=0;
				break;
			}
			if(b1[i]!=b2[i]){
				b=0,c=0,d=0;
				break;
			}	
		}
		if(i==2){
			if((b1[i]>='A'&&b1[i]<='C'&&b2[i]>='A'&&b2[i]<='C')||(b1[i]>='D'&&b1[i]<='F'&&b2[i]>='D'&&b2[i]<='F'))
            c=1,d=1;
			else c=0,d=0;
			if(abs(int(b1[i]-b2[i]))!=1)
			d=0;
		}
	}
	printf("%d%d%d%d",a,b,c,d);
} 
