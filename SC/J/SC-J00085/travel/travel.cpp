#include <iostream>
using namespace std;
int main(){
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	bool a1=false,a2=false,a3=false,a4=false;
	
	if(s1==s3){
		a1=true;
	}else{
		cout<<"0000";
		return 0;
	}
	if(a1){
		if(s2[0]==s4[0] && s2[1]==s4[1]){
			a2=true;
		}else{
			cout<<"1000";
			return 0;
		}
		if(a2){
			if(s2[2]=='A' && s4[2]=='B'){
				a3=true;
				a4=true;
			}else if(s2[2]=='B' && s4[2]=='A'){
				a3=true;
				a4=true;
			}else if(s2[2]=='A' && s4[2]=='C'){
				a3=true;
			}else if(s2[2]=='C' && s4[2]=='A'){
				a3=true;
			}else if(s2[2]=='B' && s4[2]=='C'){
				a3=true;
				a4=true;
			}else if(s2[2]=='C' && s4[2]=='B'){
				a3=true;
				a4=true;
			}else if(s2[2]=='D' && s4[2]=='F'){
				a3=true;
				a4=true;
			}else if(s2[2]=='F' && s4[2]=='D'){
				a3=true;
				a4=true;
			}else{
				a3=false;
				cout<<"1100";
				return 0;
			}
		}
	}
	cout<<a1<<a2<<a3<<a4;
	return 0;
} 