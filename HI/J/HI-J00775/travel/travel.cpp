#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a=0,b=0,c=0,d=0;
	char c1[2], c2[3],x1[2],x2[3];
	for(int k=0;k<=1;k++){
		cin>>c1[k];
	}
	for(int i=0;i<=2;i++){
		cin>>c2[i];
	}
	for(int j=0;j<=1;j++){
		cin>>x1[j];
	}
	for(int l=0;l<=2;l++){
		cin>>x2[l];	
	}
	if(c1[0]==x1[0] and c1[1]==x1[1]){
		a=1;
	}
	
	if(a==1 and x2[0]==c2[0] and x2[1]==c2[1]){
		b=1;

	}
	if(a==1 and b==1 and (c2[2]=='A' || c2[2]=='C' || c2[2]=='B')and(x2[2]=='A' || x2[2]=='C' || x2[2]=='B')){
		c=1;

	}
	if(a==1 and b==1 and (c2[2]=='F' || c2[2]=='D') and (x2[2]=='F' || x2[2]=='D)')){
		c=1;

	}
	if(a==1 and b==1 and c2[2]=='A' and x2[2]=='B'){
		d=1;

	} 
	if(a==1 and b==1 and c2[2]=='B' and x2[2]=='A'){
		d=1;

	} 
	if(a==1 and b==1 and c2[2]=='C' and x2[2]=='B'){
		d=1;

	} 
	if(a==1 and b==1 and c2[2]=='B' and x2[2]=='C'){
		d=1;

	} 	
	if(a==1 and b==1 and c2[2]=='F' and x2[2]=='D'){
		d=1;

	} 
	if(a==1 and b==1 and c2[2]=='D' and x2[2]=='F'){
		d=1;

	} 
	if(a==1 and x2[0]==c2[0] and x2[1]==c2[1] and x2[2]==c2[2]){
		b=1;
		c=1;
		d=0;
	}	
	cout<<a<<b<<c<<d;

	
	return 0;
}
