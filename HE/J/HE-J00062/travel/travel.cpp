#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		int n=(s1[0]-'0')*10+s1[1]-'0',m=(s2[0]-'0')*10+s2[1]-'0';
		if(n==m){
			if((s1[2]=='F'||s1[2]=='D')&&(s2[2]=='F'||s2[2]=='D')){
				cout<<"1111";
			}
			else if((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C')){
				if(abs(s1[2]-s2[2])==1) cout<<"1111";
				else cout<<"1110";
			}
			else cout<<"1100";
		}
		else cout<<"1000";
	}
	else cout<<"0000";
	return 0;
} 
