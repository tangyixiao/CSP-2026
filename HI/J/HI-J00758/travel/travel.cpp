#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("trave.in","r",stdin);
	freopen("treve.out","w",stdout);
	int n,m,sum =0,x5,y5,r1=0,r2=0,r3=0,r4=0;
	char x[3] ,y[3];
	char x4 ,y4;
	cin>>n;
	for(int i=0;i<3;i++){
		cin>>x[i];
	if(x[i]>='0'and x[i]<='9'){
		x5=x[i];
	}else{
		x4=x[i];
		
	}
	
}
cin>>m;
	for(int i=0;i<3;i++){
		cin>>y[i];
	if(x[i]>='0'and x[i]<='9'){
		y5=y[i];
	}else{
		y4=y[i];
		
	}
	}
	if(m==n){
		sum+=1000;
	} else{
		cout<<r1<<r2<<r3<<r4;
			
	return 0;
	}
	if(x5==y5){
		sum+=100;
	}
	if(x4>'A'and x4<'C'and y4>'A'and y4<'C'and y4!=x4 and x5==y5){
		sum+=10;
		if(x4+1==y4 or x4-1==y4){
			sum++;
		}
	}else if(x4>'D'and x4<'E'and y4>'D'and y4<'E'){
		sum+=10;
				if(x4+1==y4 or x4-1==y4){
			sum++;
		}
	}
	
	
	return 0;
}
