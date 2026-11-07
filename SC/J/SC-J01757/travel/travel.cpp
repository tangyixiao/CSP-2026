#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	int p1=(s1[0]-'0')*10+(s1[1]-'0');
	int p2=(s2[0]-'0')*10+(s2[1]-'0');
	if(p1!=p2){
		cout<<"000";
		return 0;
	}
	cout<<"1";
	char d1,d2;
	if(s1[2]=='A' || s1[2]=='B' || s1[2]=='C') d1='l';
	else d1='r';
	if(s2[2]=='A' || s2[2]=='B' || s2[2]=='C') d2='l';
	else d2='r';
	if(d1!=d2){
		cout<<"00";
		return 0;
	}
	cout<<"1";
	if(abs(s1[2]-s2[2])==1) cout<<"1";
	else cout<<"0";
	return 0;
} 