#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,a1,c2,a2;
	cin>>c1>>a1>>c2>>a2;
	char s1[6],s2[6];
	s1[0]=a1[0];
	s1[1]=a1[1];
	s1[2]=a1[2];
	s2[0]=a2[0];
	s2[1]=a2[1];
	s2[2]=a2[2];
	if(c1==c2){
		cout<<"1";
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<"1";
			if(((s1[2]>='A'||s1[2]<='C')&&(s2[2]>='A'||s2[2]<='C'))||((s1[2]>='D'&&s1[2]<='F')&&(s2[2]>='D'||s2[2]<='F'))){
				cout<<"1";
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
	if(s1[2]=='A'&&s2[2]=='B'){
		cout<<"1";
	}
	else if(s1[2]=='B'&&(s2[2]=='A'||s2[2]=='C')){
		cout<<"1";
	}
	else if(s1[2]=='C'&&s2[2]=='B'){
		cout<<"1";
	}
	else if(s1[2]=='D'&&s2[2]=='F'){
		cout<<"1";
	}
	else if(s1[2]=='F'&&s2[2]=='D'){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	return 0;
}