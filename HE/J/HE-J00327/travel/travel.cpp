#include<bits/stdc++.h>
using namespace std;
int p1,p2;
char z1,z2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
	}
	else{
		cout<<"0000";
		return 0;
	}
	p1=s1[0]*10+s1[1],p2=s2[0]*10+s2[1];
	if(p1==p2){
		cout<<"1";
	}
	else{
		cout<<"000";
		return 0;
	}
	z1=char(s1[2]),z2=s2[2];
	if(z1=='A'&&(z2=='B'||z2=='C')||z1=='B'&&(z2=='A'||z2=='C')||z1=='C'&&(z2=='A'||z2=='B')){
		cout<<"1"; 
		if(z1=='A'&&z2=='B'||z1=='B'&&z2=='C'){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
	}
	else if(z1=='D'&&z2=='F'||z1=='F'&&z2=='D'){
		cout<<"1"<<"1";
	}
	else{
		cout<<"0"<<"0";
	}
	return 0;
} 
