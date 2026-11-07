#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int c1,c2,p1=0,p2=0;
string a;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	//cin>>c1>>s1>>c2>>s2;
	if(c1==c2&&c1!=01&&c1!=16&&c2!=01&&c2!=16){
		a+='1';
	}else a+='0';
	for(int i=1;i<=s1.size()+s2.size();i++){
		if(isdigit(s1[i])){
			p1+=int(s1[i]);
		}if(isdigit(s2[i])){
			p2+=int(s2[i]);
		}
	}
	if(c1==c2&&c1!=01&&c1!=16&&c2!=01&&c2!=16){
		if(p1==p2){
			a+='1';
		}else a+='0';
	}
	char ce1,ce2;
	for(int i=1;i<=s1.size()+s2.size();i++){
		if(!isdigit(s1[i])){
			ce1+=s1[i];
		}if(!isdigit(s2[i])){
			ce2+=s2[i];
		}
	}
	if(p1==p2){
		if((ce1=='A'&&ce2=='B')||(ce1=='B'&&ce2=='A')||(ce1=='C'&&ce2=='B')||(ce1=='B'&&ce2=='C')||(ce1=='D'&&ce2=='F')||(ce1=='F'&&ce2=='D')||(ce1=='A'&&ce2=='C')||(ce1=='C'&&ce2=='A')){
			a+='1';
		}else a+='0';
	}
	if(c1==c2&&c1!=01&&c1!=16&&c2!=01&&c2!=16){
		if(p1==p2){
			if((ce1=='A'&&ce2=='B')||(ce1=='B'&&ce2=='A')||(ce1=='C'&&ce2=='B')||(ce1=='B'&&ce2=='C')||(ce1=='D'&&ce2=='F')||(ce1=='F'&&ce2=='D')){
				a+='1';
			}else a+='0';
		}
	}
	for(int i=0;i<=4;i++){
		if(a[i]=='1'){
			cout<<1;
		}
		else if(a[i]=='0'){
			cout<<0;
		}
	}
	return 0;
} 
