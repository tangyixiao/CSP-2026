#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2,c01,c02;
	string s1,s2;
	char r1,r2;
	cin>>c1>>s1>>c2>>s2;
	bool f1=0,f2=0;
	if(c1==c2) {
		cout<<'1';
		f1=1;
	} 
	else cout<<'0';
	if(s1[0]<='9'&&s1[0]>='0'&&s1[1]<='9'&&s1[1]>='0'){
		c01=(s1[0]-'0')*10+(s1[1]-'0');
		r1=s1[2];
	}
	else if(s1[0]<='9'&&s1[0]>='0'&&(s1[1]>='9'||s1[1]<='0')){
		c01=(s1[0]-'0');
		r1=s1[1];
	}
    if(s2[0]<='9'&&s2[0]>='0'&&s2[1]<='9'&&s2[1]>='0'){
		c02=(s2[0]-'0')*10+(s2[1]-'0');
		r2=s2[2];
	}
	else if(s2[0]<='9'&&s2[0]>='0'&&(s2[1]<='F'||s2[1]>='A')){
		c02=(s2[0]-'0');
		r2=s2[1];
	}
		
	if(f1&&c01==c02) {
		cout<<'1';
		f2=1;
	}
	else cout<<'0';
	bool f3=0;
	if(f2&&(r1=='A'||r1=='B'||r1=='C')&&(r2=='A'||r2=='B'||r2=='C')){
		cout<<'1';
		f3=1;
	}
	else if(f2&&(r1=='F'||r1=='D')&&(r2=='F'||r2=='D')){
		cout<<'1';
		f3=1;
	}
	else cout<<'0';
	if(f3&&((r1=='A'&&r2=='B')||(r1=='B'&&r2=='A'))) cout<<1;
	else if(f3&&((r1=='B'&&r2=='C')||(r1=='C'&&r2=='B'))) cout<<1; 
	else if(f3&&((r1=='D'&&r2=='F')||(r1=='F'&&r2=='D'))) cout<<1; 
	else cout<<'0';
	return 0;
} 
