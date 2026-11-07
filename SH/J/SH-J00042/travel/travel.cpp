#include<bits/stdc++.h>
using namespace std;
char c1[2],s1[3],c2[2],s2[3];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]!=c2[0]||c1[1]!=c2[1]){
		cout<<"0000";
		return 0;
	}cout<<1;
	if(s1[0]!=s2[0]||s1[1]!=s2[1]){
		cout<<"000";
		return 0;
	}cout<<1;
	bool b1=(s1[2]=='A'||s1[2]=='B'||s1[2]=='C');
	bool b2=(s2[2]=='A'||s2[2]=='B'||s2[2]=='C');
	bool b3=(s1[2]=='D'||s1[2]=='F');
	bool b4=(s2[2]=='D'||s2[2]=='F');
	if(b1&&b2||b3&&b4){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}if(s1[2]=='A'&&s2[2]=='C'||s1[2]=='C'&&s2[2]=='A'){
		cout<<0;
		return 0;
	}cout<<1;
	return 0;
}

