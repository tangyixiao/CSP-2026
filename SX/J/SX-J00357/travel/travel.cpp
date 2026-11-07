#include <bits/stdc++.h>
using namespace std;
string c[5];
string s[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=2;i++){
		cin>>c[i];
		cin>>s[i];
	}
	if(c[1]==c[2]){
		cout<<1;
		if(s[1][0]==s[2][0]&&s[1][1]==s[2][1]){
			cout<<1;
			if(s[1][2]=='A'||s[1][2]=='B'||s[1][2]=='C'){
				if(s[2][2]=='A'||s[2][2]=='B'||s[2][2]=='C'){
					cout<<1;
					if(abs(s[1][2]-s[2][2])==1){
						cout<<1;
						return 0;
					}else{
						cout<<0;
						return 0;
					}
				}
			}
			if(s[1][2]=='D'||s[1][2]=='F'){
				if(s[2][2]=='D'||s[2][2]=='F'){
					cout<<1;
					if(abs(s[1][2]-s[2][2])==1){
						cout<<1;
						return 0;
					}else{
						cout<<0;
						return 0;
					}
				}
			}
			cout<<0;
			cout<<0;
		}else{
			cout<<0;
			cout<<0;
			cout<<0;
		}
	}else{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
	}










	return 0;
}