#include<bits/stdc++.h>
using namespace std;
bool b1,b2,b3,b4;
string s1,s2,s3,s4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >>s1>>s2>>s3>>s4;
	for(int i = 0;i<s2.size();i++){
		if(s2[i]=='D') s2[i] = 'E';
		if(s4[i]=='D') s4[i] = 'E';
	}
	if(s1!=s3){
		cout <<"0000";
		return 0;
	}else if(s1==s3&&(s2[0]!=s4[0]||s2[1]!=s4[1])){
		cout <<"1000";
		return 0;
	}else if(s1==s3&&s2[0]==s4[0]&&s2[1]==s4[1]&&(s2[2]>='A'&&s2[2]<='C'&&s4[2]>='E'&&s2[2]<='F')||(s2[2]>='E'&&s2[2]<='F'&&s4[2]>='A'&&s2[2]<='C')){
		cout <<"1100";
		return 0;
	}else if(s1==s3&&s2[0]==s4[0]&&s2[1]==s4[1]&&(s2[2]>='A'&&s2[2]<='C'&&s4[2]>='A'&&s2[2]<='C')||(s2[2]>='E'&&s2[2]<='F'&&s4[2]>='E'&&s2[2]<='F')){
		if(abs(int(s2[2]-'A'+1)-int(s4[2]-'A'+1))==1){
			cout <<"1111";
			return 0;
		}else{
			cout <<"1110";
			return 0;
		}
	}
} 
