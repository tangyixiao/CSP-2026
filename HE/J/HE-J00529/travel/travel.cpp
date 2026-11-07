#include <bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<"0000";
		return 0;
	}
	string a,b;
	a+=s1[0]+s1[1];
	b+=s2[0]+s2[1];
	if(a==b){
		cout<<1;
	}
	else{
		cout<<"000";
		return 0;
	}
	char x,y;
	x=s1[2],y=s2[2];
	if(x<='C'&&y<='C'){
		cout<<1;
	}
	else if(x>='D'&&y>='D'){
		cout<<1;
	}
	else{
		cout<<"00";
		return 0;
	}
	if(x=='B'||y=='B'){
		cout<<1;
	}
	else if(x=='D'&&y=='F'){
		cout<<1;
	}
	else if(x=='F'&&y=='D'){
		cout<<1;
	}
	else if((x=='A'||x=='C')&&(y=='A'||y=='C')){
		cout<<0;
	}
	else{
		cout<<0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
