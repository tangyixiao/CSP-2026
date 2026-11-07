#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	char a1=s1[2],a2=s2[2];
	int b1=(s1[0]-'0')*10+s1[1]-'0';
	int b2=(s2[0]-'0')*10+s2[1]-'0';
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(c1==c2&&b1==b2){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(c1==c2&&b1==b2&&((a1<='C'&&a2<='C')||(a1>='D'&&a2>='D'))){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(c1==c2&&b1==b2&&((a1<='C'&&a2<='C')||(a1>='D'&&a2>='D'))&&((a1-a2==1)||(a2-a1==1))){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
} 
