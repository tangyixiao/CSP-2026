#include<bits/stdc++.h>
using namespace std;
bool pd(char a,char b){
	switch(a){
		case 'A':if(b=='B'||b=='C')return 1;break;
		case 'B':if(b=='A'||b=='C')return 1;break;
		case 'C':if(b=='A'||b=='B')return 1;break;
		case 'D':if(b=='E')return 1;break;
		case 'E':if(b=='D')return 1;break;
		default:break;
	}
	return 0;
}
bool pd2(char a,char b){
	switch(a){
		case 'A':if(b=='B')return 1;break;
		case 'B':if(b=='A'||b=='C')return 1;break;
		case 'C':if(b=='B')return 1;break;
		case 'D':if(b=='E')return 1;break;
		case 'E':if(b=='D')return 1;break;
		default:break;
	}
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(s1[2]=='F')s1[2]='E';
	if(s2[2]=='F')s2[2]='E';
	if(c1==c2){
		cout<<"1";
		string x=s1.substr(0,2),y=s2.substr(0,2);
		if(x==y){
			cout<<"1";
			if(pd(s1[2],s2[2])){
				cout<<"1";
				if(pd2(s1[2],s2[2])){
					cout<<"1";
				}
				else cout<<"0";
			}
			else {
				cout<<"00";
				return 0;
			}
		}
		else {
			cout<<"000";
		}
	}
	else {
		cout<<"0000";
		return 0;
	}
	return 0;
}
