#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2;
	cin>>s1>>s2;
	string s3,s4;
	cin>>s3>>s4;
	if(s1!=s3){
		cout<<"0000";
		return 0;
	}
	if(s1==s3)cout<<1;
	int x1=(s2[0]-'0')*10+s2[1]-'0';
	int x2=(s4[0]-'0')*10+s4[1]-'0';
	if(x1==x2)cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'){
		if(s2[2]!=s4[2]&&(s4[2]=='A'||s4[2]=='B'||s4[2]=='C')){
			cout<<1;
		}
		else{
			if(s2[2]!=s4[2])cout<<"00";
			if(s2[2]==s4[2])cout<<"10";
			return 0;
		}
	}
	else if(s2[2]=='E'||s2[2]=='F'){
		if(s4[2]=='E'||s4[2]=='F')cout<<1;
		else{
			if(s2[2]!=s4[2])cout<<"00";
			if(s2[2]==s4[2])cout<<"10";
			return 0;
		}
	}
	if(s2[2]=='E'||s2[2]=='F'||s2[2]=='B'||s4[2]=='B')cout<<1;
	else{
		cout<<0;
	}
	return 0;
}