#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s1!=s3){
		cout<<"0000";
		return 0;
	}
	cout<<'1';
	if(s2[0]!=s4[0]||s2[1]!=s4[1]){
		cout<<"000";
		return 0;
	}
	cout<<'1';
	char x=s2[2],y=s4[2];
	if((x=='A'||x=='B'||x=='C')&&(y=='A'||y=='B'||y=='C')){
		cout<<'1';
		if(x=='A'&&y=='C'||x=='C'&&y=='A'){
			cout<<'0';
			return 0;
		}
		cout<<'1';
		return 0;
	}
	else if(x=='D'&&y=='F'||x=='F'&&y=='D'){
		cout<<"11";
		return 0;
	}
	cout<<"00";
	return 0;
}