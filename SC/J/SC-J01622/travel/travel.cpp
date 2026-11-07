#include<bits/stdc++.h>
using namespace std;
string s1,s2,c1,c2;
int s3,s4,c3,c4;
char letter1,letter2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]-'0'!=0){
		c3=(c1[0]-'0')*10+c1[1]-'0';
	}else{
		c3=c1[1]-'0';
	}
	if(c2[0]-'0'!=0){
		c4=(c2[0]-'0')*10+c2[1]-'0';
	}else{
		c4=c2[1]-'0';
	}
	if(c3==c4) cout<<1;
	else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(s1[0]-'0'!=0){
		s3=(s1[0]-'0')*10+s1[1]-'0';
	}else{
		s3=s1[1]-'0';
	
	}
	
	
	if(s2[0]-'0'!=0){
		s4=(s2[0]-'0')*10+s2[1]-'0';
	}else{
		s4=s2[1]-'0';
	}
	if((s3==s4)&&(c3==c4)) cout<<1;
	else{
		cout<<0<<0<<0;
		return 0;
	}
	letter1=s1[2];
	letter2=s2[2];
	if(((letter1>='A'&&letter1<='C')&&(letter2>='A'&&letter2<='C'))||((letter1>='D'&&letter1<='F')&&(letter2>='D'&&letter1<='F'))){
		cout<<1;
	}
	else{
		cout<<0<<0;
		return 0;
	}
	
	if((letter1=='A'&&letter2=='B')||(letter1=='B'&&letter2=='C')||(letter1=='D'&&letter2=='F')){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;

}
