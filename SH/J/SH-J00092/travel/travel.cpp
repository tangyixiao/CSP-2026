#include<bits/stdc++.h>
using namespace std;
string c1,s1,a1,k1,c2,s2,a2,k2;
bool check1(string k1,string k2){
	if( (k1>="A"&&k1<="C"&&k2>="A"&&k2<="C")||((k1=="D"||k1=="F")&&(k2=="D"||k2=="F")) ){
		return true;
	}
	return false;
}
bool check2(string k1,string k2){
	if(k1=="A"&&k2=="C"||k1=="C"&&k2=="A")
	return false;
	return true;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	a1=s1[0]+s1[1];
	a2=s2[0]+s2[1];
	k1=s1[2];
	k2=s2[2];
	if(c1==c2){
		cout<<"1";
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(a1==a2){
		cout<<"1";
	}
	else{
		cout<<"000";
		return 0;
	}
	if(check1(k1,k2)){
		cout<<"1";
	}
	else{
		cout<<"00";
		return 0;
	}
	if(check2(k1,k2)){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	return 0;
}
