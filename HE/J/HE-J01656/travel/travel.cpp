#include <bits/stdc++.h>
using namespace std;
string c,s,c_2,s_2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>c_2>>s_2;
	if(c==c_2){
		if(s[0]==s_2[0]&&s[1]==s_2[1]){
			if((s[2]=='D'||s[2]=='F')&&(s_2[2]=='D'||s_2[2]=='F')||(s[2]=='A'||s[2]=='B'||s[2]=='C')&&(s_2[2]=='A'||s_2[2]=='B'||s_2[2]=='C')){
				if(abs(s[2]-s_2[2])==1) cout<<"1111";
				else cout<<"1110";
			} else cout<<"1100";
		} else cout<<"1000";
	} else cout<<"0000";
	return 0;
}
