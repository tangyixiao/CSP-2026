#include<bits/stdc++.h>
using namespace std;
//char c1[3],s1[4],c2[3],s2[4];
/*
struct tic{
	int che;//≥µ 
	int pai;//≈≈ 
	char wei;//Œª 
};
tic a[4]; 
*/ 
string s;
void ch1(){
	if(s[5]=='B'&&(s[12]=='A'||s[12]=='C')){
		cout<<"1";
	}else if(s[12]=='B'&&(s[5]=='A'||s[5]=='C')){
		cout<<"1";
	}else{
		cout<<"0";
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	getline(cin,s);
	if(s[0]==s[7]&&s[1]==s[8]){
		cout<<"1";
		if(s[3]==s[10]&&s[4]==s[11]){
			cout<<"1"; 
			if((s[5]=='A'||s[5]=='B'||s[5]=='C')&&(s[12]=='A'||s[12]=='B'||s[12]=='C')){
				cout<<"1";
				ch1();
			}else if((s[5]=='D'||s[5]=='F')&&(s[12]=='D'||s[12]=='F')){
				cout<<"11"; 
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
			return 0;
		}
	}else{
		cout<<"0000";
		return 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
