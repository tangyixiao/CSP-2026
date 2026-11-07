#include<bits/stdc++.h>
using namespace std;
int change(int x,int y){
	
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s2,s4;
	int a,b;
	cin >>a>>s2>>b>>s4;
	if (a!=b){
		cout <<"0000";
		return 0;
	}
	else {
		cout <<1;
	}
	int c,d;
	c=(s2[0]-'0')*10+s2[1]-'0';
	d=(s4[0]-'0')*10+s4[1]-'0';
	if (c!=d){
		cout <<"000";
		return 0;
	}
	cout <<1;
	char c1,c2;
	c1=s2[2];
	c2=s4[2];
	if(c1=='A' || c1=='B' || c1=='C'){
		if(c2=='A' || c2=='B' || c2=='C'){
			cout <<1;
			if(c1=='A' && c2=='B'){
				cout <<1;
				return 0;
			}
			if(c1=='B' && c2=='A'){
				cout <<1;
				return 0;
			}
			if(c1=='B' && c2=='C'){
				cout <<1;
				return 0;
			}
			if(c1=='C' && c2=='A'){
				cout <<1;
				return 0;
			}
			cout <<0;
		}
	}
	if(c1=='D' || c1=='E'){
		if(c2=='D' || c2=='E'){
			cout <<1;
			if(c1=='D' && c2=='E'){
				cout <<1;
				return 0;
			}
			if(c1=='E' && c2=='D'){
				cout <<1;
				return 0;
			}
			cout <<0;
		}
		else {
			cout <<"00";
			return 0;
		}
	}
	return 0;}