#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool flag1=true,flag2=true,flag3=true,flag4=true;
void op1(){
	int len1=c1.size(),len2=c2.size();
	if(len1!=len2)flag1=false;
	else{
		for(int i=0;i<len1;i++){
			if(c1[i]!=c2[i])flag1=false;
		}
	}
}
void op2(){
	for(int i=0;i<2;i++){
		if(s1[i]!=s2[i]){
			flag2=false;
			break;
		}
	}
}
void op3(){
	if((s1[2]=='A')&&(s2[2]!='B'&&s2[2]!='C'))flag3=false;
	if((s1[2]=='B')&&(s2[2]!='A'&&s2[2]!='C'))flag3=false;
	if((s1[2]=='C')&&(s2[2]!='B'&&s2[2]!='A'))flag3=false;
	if((s1[2]=='D')&&(s2[2]!='F'))flag3=false;
	if((s1[2]=='F')&&(s2[2]!='D'))flag3=false;
}
void op4(){
	if((s1[2]=='A')&&(s2[2]!='B'))flag4=false;
	if((s1[2]=='B')&&(s2[2]!='A'&&s2[2]!='C'))flag4=false;
	if((s1[2]=='C')&&(s2[2]!='B'))flag4=false;
	if((s1[2]=='D')&&(s2[2]!='F'))flag4=false;
	if((s1[2]=='F')&&(s2[2]!='D'))flag4=false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	op1();op2();op3();op4();
	if(flag1)cout<<"1";
	else{
		cout<<"0000";
		return 0;
	}
	if(flag2)cout<<"1";
	else{
		cout<<"000";
		return 0;
	}
	if(flag3)cout<<"1";
	else{
		cout<<"00";
		return 0;
	}
	if(flag4)cout<<"1";
	else{
		cout<<"0";
	}
	return 0;
}
