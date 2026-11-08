#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<0<<0<<0<<0;
		return 0; 
	}
	string ss1="  ",ss2="  ";
	ss1[0]=s1[0],ss1[1]=s1[1];
	ss2[0]=s2[0],ss2[1]=s2[1];
	if(ss1==ss2){
		cout<<1;
	}
	else{
		cout<<0<<0<<0;
		return 0;
	}
	char zm,zm2;
	zm=s1[2],zm2=s2[2];
	bool x1=false,x2=false;
	if(zm<='C' && zm>='A'){
		x1=true;
	}
	if(zm2<='C' && zm2>='A'){
		x2=true;
	}
	if(x1==x2){
		cout<<1;
		if(!x1==true){
			cout<<1;
		}
		else{
			if(zm=='B' || zm2=='B'){
				cout<<1;
			}
			else{
				cout<<0;
			}
		}
	}
	else{
		cout<<0<<0;
	}
	return 0;
} 
