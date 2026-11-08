#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	char x,y;
	int a=0,b=0;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}else{
		cout<<"1";
	}
	for(int i=0;i<s1.size();i++){
		if(s1[i]>='9'&&s1[i]<='0'){
			a=a+s1[i];
		}
	}
	for(int i=0;i<s2.size();i++){
		if(s2[i]>='9'&&s2[i]<='0'){
			b=b+s2[i];
		}
	}
	if(a==b){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	for(int i=0;i<s1.size();i++){
		if(s1[i]>='A'&&s1[i]<='F'){
			x=s1[i];
		}
	}
	for(int i=0;i<s2.size();i++){
		if(s2[i]>='A'&&s2[i]<='F'){
			y=s2[i];
		}
	}
	if((x<='C'&&x>='A')&&(y<='C'&&y>='A')||(x<='F'&&x>='D')&&(y<='F'&&y>='D')){
		cout<<"1";
	}else{
		cout<<"0";
	}
	if(a==b){
		if((x=='A'&&y=='B')||(x=='B'&&y=='A')||(x=='C'&&y=='B')||(x=='B'&&y=='C')||(x=='F'&&y=='D')||(x=='D'&&y=='F')){
			cout<<"1";
		}else{
			cout<<"0";
		}
	}
	return 0;
}
