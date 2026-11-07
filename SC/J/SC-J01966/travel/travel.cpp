#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s[7];
	for(int i=1;i<=4;i++){
		cin>>s[i];
		
	}
	if(s[1]==s[3]){
		cout<<"1";
		if(s[2][0]==s[4][0] && s[2][1]==s[4][1]){
			cout<<"1";
			if((s[2][2]>='A' && s[2][2]<='C' && s[4][2]>='A' &&s[4][2]<='C') || (s[2][2]>='D' && s[2][2]<='F' && s[4][2]>='D' &&s[4][2]<='F')){
				cout<<"1";
				if((s[2][2]>s[4][2] && s[2][2]-s[4][2]==1) || s[2][2]<s[4][2] && s[4][2]-s[2][2]==1){
					cout<<"1";
				}
				else{
					cout<<"0";
				}	
			}
			else{
				for(int i=1;i<=2;i++){
					cout<<"0";
				}
			}
		
		}
		else{
			for(int i=1;i<=3;i++){
				cout<<"0";
				
			}
		}
	}	
	else{
		for(int i=1;i<=4;i++){
			cout<<"0";
		}
	}
	return 0;
} 