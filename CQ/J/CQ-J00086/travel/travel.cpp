#include<iostream>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s,s2,s3,s4;
	cin>>s>>s2>>s3>>s4;
	if(s==s3){
		if(s2[0]==s4[0]&&s2[1]==s4[1]){
			if((s2[2]=='D'&&s4[2]=='F')||(s2[2]=='F'&&s4[2]=='D')||(s2[2]=='A'&&(s4[2]=='C'||s4[2]=='B'))||(s2[2]=='C'&&(s4[2]=='A'||s4[2]=='B'))||(s2[2]=='B'&&(s4[2]=='A'||s4[2]=='C'))){
				if((s2[2]=='D'&&s4[2]=='F')||(s2[2]=='A'&&s4[2]=='B')||(s2[2]=='C'&&s4[2]=='B')||(s2[2]=='F'&&s4[2]=='D')||(s2[2]=='B'&&s4[2]=='A')||(s2[2]=='B'&&s4[2]=='C')){
					cout<<"1111";
					return 0; 
				}
				else{
					cout<<"1110";
					return 0; 
				}
			}
			else{
				cout<<"1100";
				return 0;
			}
		}
		else{
			cout<<"1000";
			return 0;
		}
	}
	else{
		cout<<"0000";
		return 0;
	}
	return 0;
} 
