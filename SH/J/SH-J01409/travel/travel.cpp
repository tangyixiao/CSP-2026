#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool cmp(char a,char b){
	if(a=='A'&&b=='B'||b=='C')
		return 1;
	else if(a=='B'&&b=='A'||b=='C')
		return 1;
	else if(a=='C'&&b=='A'||b=='B')
		return 1;
	else if(a=='D'&&b=='F')
		return 1;
	else if(a=='F'&&b=='D')
		return 1;
	return 0; 
}
bool cmp1(char x,char y){
	if(x=='A'&&y=='B') return 1;
	else if(x=='B'&&y=='A'||y=='C') return 1;
	else if(x=='C'&&y=='B') return 1;
	else if(x=='D'&&y=='F') return 1;
	else if(x=='F'&&y=='D') return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		int p1=(s1[0]-'0')*10+(s1[1]-'0');
		int p2=(s2[0]-'0')*10+(s2[1]-'0');
		if(p1==p2){
			if(cmp(s1[2],s2[2])){
				if(cmp1(s1[2],s2[2])){
					cout<<"1111";
				}
				else{
					cout<<"1110";
				}
			}
			else{
				cout<<"1100";
			}
		}
		else {
			cout<<"1000";
		}
	}
	else
		cout<<"0000";
}
