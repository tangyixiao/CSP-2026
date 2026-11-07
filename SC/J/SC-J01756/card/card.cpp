#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2,t1,t2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int a1,a2;
	if(s1[0]==0){
		a1=s1[1];
	}
	else{
		a1=s1[1]+10;
	}
	if(s2[0]==0){
		a2=s2[1];
	}
	else{
		a2=s2[1]+10;
	}
	char b1=s1[2],b2=s2[2];
	if(b1=='A'||b1=='B'||b1=='C'){
		t1=1;
	}
	else t1=2;
	if(b2=='A'||b2=='B'||b2=='C'){
		t2=1;
	}
	else t2=2;
	if(c1==c2){
		cout<<'1';
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(a1==a2){
		cout<<'1';
	}
	else{
		cout<<"000";
		return 0;
	}
	if(t1==t2){
		cout<<'1';
	}
	else{
		cout<<"00";
		return 0;
	}
	if(b1-b2==1||b1-b2==-1){
		cout<<'1';
	}
	else{
		cout<<'0';
		return 0;
	}
	return 0;
}
