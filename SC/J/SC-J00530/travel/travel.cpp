#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]==c2[0]&&c1[1]==c2[1]){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	bool f=0,f1=0;
	if(s1[0]==s2[0]&&s1[1]==s2[1]) {
		cout<<"1";
		f=1;
	}
	else {
		cout<<"000";
		return 0;
	}
	if(f==1&&((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C'))) {
		f1=1;
		cout<<"1";
	}
	else {
		cout<<"00";
		return 0;
	}
	if(abs((s1[2]-'A')-(s2[2]-'A'))==1&&f1==1) cout<<"1";
	else {
		cout<<"0";
		return 0;
	}
	return 0;
} 