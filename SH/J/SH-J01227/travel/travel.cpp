#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int c1,c2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<"1";
			char s_1=char(s1[2]),s_2=char(s2[2]);
			if(((s_1=='A'||s_1=='B'||s_1=='C')&&(s_2=='A'||s_2=='B'||s_2=='C'))||((s_1=='D'||s_1=='F')&&(s_2=='D'||s_2=='F'))){
				cout<<"1";
				if((s_1=='A'&&(s_2=='B'))||(s_1=='B'&&(s_2=='A'||s_2=='C'))||(s_1=='C'&&(s_2=='B'))||(s_1=='D'&&(s_2=='F'))||(s_1=='F'&&(s_2=='D'))){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
} 
