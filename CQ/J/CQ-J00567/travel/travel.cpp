#include<bits/stdc++.h>
using namespace std;
int main(){
	string c1,s1,c2,s2;
	int a,b,f1=0,f2=0,f3=0,f4=0;
	char a2,b2;
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	a=(s1[0]-'0')*10+(s1[1]-'0');
	b=(s2[0]-'0')*10+(s2[1]-'0');
	a2=char(s1[2]);
	b2=char(s2[2]);
	if(c1==c2){
		f1=1;
	}
	if(a==b&&f1==1){
		f2=1;
	}
	if(f2==1&&(a2-'A'<3&&b2-'A'<3||a2-'A'>2&&b2-'A'>2)){
		f3=1;
	}
	if(abs(a2-'A'-(b2-'A'))==1&&f3==1){
		f4=1;
	}
	if(f1==1)cout<<"1"; 
	else cout<<"0";
	if(f2==1)cout<<"1"; 
	else cout<<"0";
	if(f3==1)cout<<"1"; 
	else cout<<"0";
	if(f4==1)cout<<"1"; 
	else cout<<"0";
} 
