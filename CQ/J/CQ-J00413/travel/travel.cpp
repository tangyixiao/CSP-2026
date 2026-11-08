#include<bits/stdc++.h>
using namespace std;
string s[4];
bool check(){
	if(s[1][2]=='A' || s[1][2]=='B' || s[1][2]=='C'){
		if(s[3][2]!='A'&& s[3][2]!='B'&& s[3][2]!='C'){
			return 0;
		}
		else return 1;
	}
	else{
		if(s[3][2]=='A' || s[3][2]=='B' || s[3][2]=='C') return 0;
		else return 1;
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=4;i++){
		cin>>s[i-1];
	}
	if(s[0]==s[2]){
		cout<<1;
		if(s[1][1]==s[3][1]){
			cout<<1;
			if(check()){
				cout<<1;
				if(s[1][2]-s[3][2]==1 || s[1][2]-s[3][2]==-1){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000"; 
		}
	}
	else{
		cout<<"0000";
	}
} 
