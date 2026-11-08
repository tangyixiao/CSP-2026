#include<bits/stdc++.h>
using namespace std;
string s,s2,s3,s4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s>>s2>>s3>>s4;
	if(s==s3){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	if(s==s3&&s2[0]==s4[0]&&s2[1]==s4[1]){
		cout<<"1";
	}
	else{
		cout<<"0"; 
	}
	int kkk=(s2[2]=='C')+(s2[2]=='B')+(s2[2]=='A'),kkk2=(s4[2]=='C')+(s4[2]=='B')+(s4[2]=='A');
	if(s==s3&&s2[0]==s4[0]&&s2[1]==s4[1]&&kkk==kkk2){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	int flag=(abs(int(s2[2]-'A'+1)-int(s4[2]-'A'+1))==1)+(min(s2[2]-'A'+1,s4[2]-'A'+1)==4&&max(s2[2]-'A'+1,s4[2]-'A'+1)==6);
	if(s==s3&&s2[0]==s4[0]&&s2[1]==s4[1]&&kkk==kkk2&&flag){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	return 0;
}
