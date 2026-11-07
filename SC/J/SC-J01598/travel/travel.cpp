#include<bits/stdc++.h>
using namespace std;
string left="ABC";
string right="DE";
bool side(char x,char y){
	if((x=='A'&&y=='B')||(x=='B'&&y=='A')){
		return 1;
	}
	else if((x=='B'&&y=='C')||(x=='C'&&y=='B')){
		return 1;
	}
	else if((x=='B'&&y=='C')||(x=='C'&&y=='B')){
		return 1;
	}
	else if((x=='A'&&y=='C')||(x=='C'&&y=='A')){
		return 1;
	}
	else{
		return 0;
	}
}
bool near(char x,char y){
	if((x=='A'&&y=='B')||(x=='B'&&y=='A')){
		return 1;
	}
	else if((x=='B'&&y=='C')||(x=='C'&&y=='B')){
		return 1;
	}
	else if((x=='B'&&y=='C')||(x=='C'&&y=='B')){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	freopen("traval.in","r",stdin);
	freopen("traval.out","w",stdout);
	string a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	if(a1[0]==b1[0]&&a1[1]==b1[1]){
		cout<<1;
		if(a2[0]==b2[0]&&a2[1]==b2[1]){
			cout<<1;
			if(side(a2[2],b2[2])){
				cout<<1;
				if(near(a2[2],b2[2])){
					cout<<1;
				}
				else{
					cout<<0; 
				}
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
}