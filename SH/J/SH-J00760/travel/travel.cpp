#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int p1,p2;
	p1=(s1[0]-'0')*10+(s1[1]-'0');
	p2=(s2[0]-'0')*10+(s2[1]-'0');
	bool l1=0,l2=0;
	if(s1[2]<='C'){
		l1=1;
	}
	if(s2[2]<='C'){
		l2=1;
	}
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(c1==c2&&p1==p2){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(c1==c2&&p1==p2&&l1==l2){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(c1==c2&&p1==p2&&l1==l2&&abs(s1[2]-s2[2])==1){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
} 
