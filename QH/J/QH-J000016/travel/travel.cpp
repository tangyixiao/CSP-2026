#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin)
	freopen("travel.out","w",stdout)
int r1,x1,m,n,r2,x2,i,s;
cin>>r1>>r2>>x1>>x2; 
if(r1==x1){
	cout<<'0';
}else{
		cout<<"1";
}
m=r2/100;
n=x2/100;
if(m==n){
	cout<<"1";
}else{
	cout<<"0";
}
m=0;
n=0;
m=r2%100;
n=x2%100;
if(abs(r2-x2)<=5){
	cout<<"0";
}else{
	cout<<"1";
}
if(((m=='C'&&n=='D')||(m=='D'&&n=='C'))||(abs(m-n)!=1)){
	cout<<"1";
}else{
	cout<<"0";}
	fclose(stdin)
	fclose(stdout)
return 0;
}
