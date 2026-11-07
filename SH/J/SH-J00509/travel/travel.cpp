#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c,s,c1,s1;
	cin>>c>>s>>c1>>s1;
	string result;
	if(c==c1)result=result+'1';
	else{
		cout<<"0000";
		return 0;
	} 
	if(s[0]==s1[0] && s[1]==s1[1])result+='1';
	else {
		cout<<"1000";
		return 0;
	}
	if((s[2]>='A' && s[2]<='C' && s1[2]>='A' && s1[2]<='C') ||(s[2]>='D' && s[2]<='F'&& s1[2]>='D' && s1[2]<='F'))result+='1';
	else{
		cout<<"1100";
		return 0;
	}
	if(abs(s[2]-s1[2])==1)cout<<"1111";
	else cout<<"1110";
	return 0;
}
