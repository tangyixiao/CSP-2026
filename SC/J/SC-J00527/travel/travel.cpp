#include<bits/stdc++.h>
using namespace std;
string s,m,w,n;
int main(){
	cin>>s>>m>>w>>n;
	if(s==w){
		if(m[0]==n[0]&&m[1]==n[1]){
			if(((m[2]=='A'||m[2]=='B'||m[2]=='C')&&(n[2]=='A'||n[2]=='B'||n[2]=='C'))||((m[2]=='D'||m[2]=='F')&&(n[2]=='D'||n[2]=='F'))){
				if((m[2]=='D'||m[2]=='F')||(m[2]=='A'&&n[2]=='B')||(m[2]=='B'&&(n[2]=='A'||n[2]=='C'))||(m[2]=='C'&&n[2]=='B')){
					cout<<"1111";
				}
				else{
					cout<<"1110";
				}
			}
			else{
				cout<<"1100";
			}
		}
		else {
			cout<<"1000";
			return 0;
		}
	}
	else{
		cout<<"0000";
	} 
	return 0;
} 