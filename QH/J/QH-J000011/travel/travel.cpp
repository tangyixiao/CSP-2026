#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","w",stdin);
	freopen("travel.out","r",stdout);
	string c[2],s[2];
	cin>>c[0]>>s[0]>>c[1]>>s[1];
	string result="0000";
	if(c[0]==c[1]){
		result[0]='1';
		if(s[0][0]==s[1][0] && s[0][1]==s[1][1]){
			result[1]='1';
			if(s[0][2]>='A'&&s[0][2]<='C'&&s[1][2]>='A'&&s[1][2]<='C'){
				result[2]='1';
				if(s[0][2]=='A'&&s[1][2]=='B'){
					result[3]='1';
				}
				if(s[0][2]=='B'&&s[1][2]=='C'){
					result[3]='1';
				}
				if(s[0][2]=='B'&&s[1][2]=='A'){
					result[3]='1';
				}
				if(s[0][2]=='C'&&s[1][2]=='B'){
					result[3]='1';
				}
			}
			if(s[0][2]>='D'&&s[0][2]<='F'&&s[1][2]>='D'&&s[1][2]<='F'){
				result[2]='1';
				result[3]='1';
			}
		}
	}
	cout<<result;
	return 0;
	fclose(stdin);
	fclose(stdout);
}
