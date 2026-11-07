#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	if(s1!=s3){
		cout<<"0000";
		return 0;
	}else{
		cout<<1;
	}char a=s2[0],b=s2[1],c=s4[0],d=s4[1];
	if(a==c&&b==d){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}char a1=s2[2],b1=s4[2];
	if(int(a1-65)<3&&int(b1-65)<3){
		cout<<1;
	}else if(int(a1-65)>=3&&int(b1-65)>=3){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	if(a1=='A'&&b1=='B'){
		cout<<1;
	}else if(a1=='B'&&b1=='A'){
		cout<<1;
	}else if(a1=='C'&&b1=='B'){
		cout<<1;
	}else if(a1=='B'&&b1=='C'){
		cout<<1;
	}else if(a1=='D'&&b1=='F'){
		cout<<1;
	}else if(a1=='F'&&b1=='D'){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
