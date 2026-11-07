#include<bits/stdc++.h>
using namespace std;
int c1,c2;
char s1[4];
char s2[4];
int p1,p2,p3;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		p1=1;
	}
	else{
		cout<<"0";
	}
	int s3,s4,s5,s6,s7,s8;
	
	s3=s1[0]-'0';
	s4=s2[0]-'0';
	s5=s1[1]-'0';
	s6=s2[1]-'0';
	s7=s1[2]-'!'-31;
	s8=s2[2]-'!'-31;
	if(s3==s4&&s5==s6){
		cout<<"1";
		p2=1;
	}
	else{
		cout<<"0";
	}
	if((s7<=3&&s8>3)||(s7>3&&s8<=3)){
		cout<<"0";
	}
	else{
		cout<<"1";
		p3=1;
	}
	if(p1==1&&p2==1&&p3==1){
		if((s7-s8)==1||(s8-s7)==1){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
	}
	else{
		cout<<"0";
	}
	
	
	reture 0;

}