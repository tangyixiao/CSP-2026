#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string str1,str2,str3,str4;
	cin>>str1>>str2>>str3>>str4;
	bool flag=true;
	//是否在同一个车厢 
	if(str1==str3){
		cout<<"1";
	} else {
		cout<<"0000";
		return 0;
	}
	//是否在同一排 
	if(str2[0]==str4[0]&&str2[1]==str4[1]){
		cout<<"1";
	} else {
		cout<<"000";
		return 0;
	}
	//是否在同一侧 
	if(str2[2]>='A'&&str2[2]<='C'&&str4[2]>='A'&&str4[2]<='C'){
		cout<<"1";
	}
	else if(str2[2]=='D'&&str4[2]=='E'||str2[2]=='E'&&str4[2]=='D'){
		cout<<"1";
	} else {
		cout<<"00";
		return 0;
	}
	//是否紧贴 
	if(str2[2]=='A'&&str4[2]=='C'||str2[2]=='C'&&str4[2]=='A'){
		cout<<"0";
	} else {
		cout<<"1";
	}
	return 0;
}