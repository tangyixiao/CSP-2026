#include <bits/stdc++.h>
using namespace std;

string a1,a2,b1,b2;
int f1,f2,f3,a,b;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>a1>>a2>>b1>>b2;
	
	if(a2[2]=='F')a2[2]='E';
	if(b2[2]=='F')b2[2]='E';
	
	if(a1==b1){
		f1=1;
		cout<<1;
	}else{
		cout<<0;
	}
	
	if(a2[0]==b2[0]&&a2[1]==b2[1] && f1==1){
		f2=1;
		cout<<1;
	}else{
		cout<<0;
	}
	
	a=a2[2]-65;
	b=b2[2]-65;
	
	if((a>2&&b>2||a<=2&&b<=2) && f2==1){
		f3=1;
		cout<<1;
	}else{
		cout<<0;
	}
	
	if(abs(a-b)==1 && f3==1 ){
		cout<<1;
	}else {
		cout<<0;
	}
	
	
	
	
	return 0;
} 
