#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
char _1z,_2z;
bool check1(char a,char b){
	if(a=='A'&&b=='B')return 1;
	if(a=='A'&&b=='C')return 1;
	if(a=='A'&&b=='D')return 0;
	if(a=='A'&&b=='F')return 0;
	if(a=='B'&&b=='A')return 1;
	if(a=='B'&&b=='C')return 1;
	if(a=='B'&&b=='D')return 0;
	if(a=='B'&&b=='F')return 0;
	if(a=='C'&&b=='A')return 1;
	if(a=='C'&&b=='B')return 1;
	if(a=='C'&&b=='D')return 0;
	if(a=='C'&&b=='F')return 0;
	if(a=='D'&&b=='A')return 0;
	if(a=='D'&&b=='B')return 0;
	if(a=='D'&&b=='C')return 0;
	if(a=='D'&&b=='F')return 1;
	if(a=='F'&&b=='A')return 0;
	if(a=='F'&&b=='B')return 0;
	if(a=='F'&&b=='C')return 0;
	if(a=='F'&&b=='D')return 1;
}
bool check2(char a,char b){
	if(a=='A'&&b=='B')return 1;
	if(a=='A'&&b=='C')return 0;
	if(a=='A'&&b=='D')return 0;
	if(a=='A'&&b=='F')return 0;
	if(a=='B'&&b=='A')return 1;
	if(a=='B'&&b=='C')return 1;
	if(a=='B'&&b=='D')return 0;
	if(a=='B'&&b=='F')return 0;
	if(a=='C'&&b=='A')return 0;
	if(a=='C'&&b=='B')return 1;
	if(a=='C'&&b=='D')return 0;
	if(a=='C'&&b=='F')return 0;
	if(a=='D'&&b=='A')return 0;
	if(a=='D'&&b=='B')return 0;
	if(a=='D'&&b=='C')return 0;
	if(a=='D'&&b=='F')return 1;
	if(a=='F'&&b=='A')return 0;
	if(a=='F'&&b=='B')return 0;
	if(a=='F'&&b=='C')return 0;
	if(a=='F'&&b=='D')return 1;
} 
int main(){
	freopen("travel.in","r",stdin);
	freopen("traval.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0); 
	cin>>c1>>s1>>c2>>s2;
    int _1p=(s1[0]-'0')*10+(s1[1]-'0');
    _1z=s1[2];
	int _2p=(s2[0]-'0')*10+(s2[1]-'0');
    _2z=s2[2];
    if(c1!=c2)cout<<"0000";
	else {
		cout<<'1';
		if(_1p!=_2p)cout<<"000";
		else {
			cout<<'1';
			if(!check1(_1z,_2z))cout<<"00";
			else{
				cout<<'1';
				if(!check2(_1z,_2z))cout<<'0';
				else cout<<'1';
			}
		}
	}
	return 0;
} 