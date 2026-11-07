#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int f=0,a=0,b=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
	}
	else{
		cout<<"0";
		a=1;
	}
	
	if(a==0&&s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<"1";
	}
	else{
		cout<<"0";
		b=1;
	}
	
	if(b==0&&s1[2]<='C'&&s2[2]<='C'){
		cout<<"1";
		f=1;
	}
	else if(b==0&&s1[2]>='D'&&s2[2]>='D'){
		cout<<"1";
		f=2;
	}
	else{
		cout<<"00";
	}
	
	if(f==2&&b==0){
		cout<<"1";
	}
	if(f==1&&b==0){
		if(s1[2]-s2[2]==1||s2[2]-s1[2]==1){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
	}
	return 0;
} 
