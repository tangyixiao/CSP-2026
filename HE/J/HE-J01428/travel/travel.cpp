#include<bits/stdc++.h> 
#include<iostream> 
#include<cstdio> 
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,c3,c4;
	cin>>c1>>c2>>c3>>c4;
	if(c1!=c3){
		cout<<"0000";
		return 0;
	}
	if(c2[0]!=c4[0] or c2[1]!=c4[1]){
		cout<<"1000";
		return 0;
	}
	int x,y;
	if(c2[2]=='A'){
		x=1;
	}
	else if(c2[2]=='B'){
		x=2;
	}
	else if(c2[2]=='C'){
		x=3;
	}
	else if(c2[2]=='D'){
		x=4;
	}
	else{
		x=5;
	}
	if(c4[2]=='A'){
		y=1;
	}
	else if(c4[2]=='B'){
		y=2;
	}
	else if(c4[2]=='C'){
		y=3;
	}
	else if(c4[2]=='D'){
		y=4;
	}
	else{
		y=5;
	}
	if(!((x<=3 and y<=3)or(x>3 and y>3))){
		cout<<"1100";
		return 0;
	}
	if(x>3 and y>3){
		cout<<"1111";
		return 0;
	}
	if(x==2 or y==2){
		cout<<"1111";
		return 0;
	}
	cout<<"1110";
	return 0;
}
