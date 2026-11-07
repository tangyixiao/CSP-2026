#include <bits/stdc++.h>
using namespace std;

string c1,s1,c2,s;
int pl1,pl2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s;
	if(c1==c2){
		cout<<"1";
	}
	else{
		cout<<"0000";
		return 0;
	}
	int x1=0,x2=0;
	for(int i=0;i<2;i++){
		x1=x1*10+s1[i]-'0';
		x2=x2*10+s[i]-'0';
	}
	if(x1==x2){
		cout<<"1";
	}
	else{
		cout<<"000";
		return 0;
	}
	x1=s1[s1.size()-1]-'A';
	x2=s[s.size()-1]-'A';
	if(x1==3||x1==5){
		pl1=1;
	}
	if(x2==3||x2==5){
		pl2=1;
	}
	if(pl1==pl2){
		cout<<"1";
	}
	else{
		cout<<"00";
		return 0;
	}
	if(pl1==1&&pl2==1){
		cout<<"1";
	}
	else{
		if(abs(x1-x2)==1){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
	}
	return 0;
}
