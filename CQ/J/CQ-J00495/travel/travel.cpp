#include<iostream>
using namespace std;
int main(){
	string c1,s1,c2,s2;
	int d,e=0;
	cin>>c1>>s1>>c2>>s2;
	bool a1,a2,a3,a4;
	if(c1==c2){
		a1=1;
	
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		a2=1;
	
	if((s1[2]=='A')||(s1[2]=='B')||(s1[2]=='C')){
		d=1;
	}
	else{
		d=2;
	}
	if((s2[2]=='D')||(s2[2]=='F')){
		e=2;
	}
	else{
		e=1;
	}
	if(d==e){
		a3=1;
		if(d==2){
			a4=1;
		}
		else{
			if(s1[2]-s2[2]==1||s1[2]-s2[2]==-1){
				a4=1;
			}
		}
	}
}
}
	cout<<a1<<a2<<a3<<a4; 
	return 0;
}
