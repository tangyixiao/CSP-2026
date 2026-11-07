#include<bits/stdc++.h>
using namespace std;
long long z,za[1000000086],x=0,c=1,d=1;
char zb[1000000086],zab[1000000086];
int main (){
 	cin>>z;
 	for(int i=1;i<=z;i++){
 		cin>>za[i];
 		c=za[i];
 		cin>>zb[i];	
 			for(int k=d;k<c+d;k++){
 				zab[k]=zb[i];
	 			}
		d=c+d;
	 	}
	 c=d-1;
	 if(c%2==0){
			for(int i=1;i<=c/2;i++){
 				if(zab[i]!=zab[c+1-i])x+=1;
		 		}	
	 	}else{
		 
	 		for(int i=1;i<=(c-1)/2;i++){
 				if(zab[i]!=zab[c+1-i])x+=1;
		 		}	
	}
	 	cout<<x;
	 
 	return 0;
 } 