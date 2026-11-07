#include<bits/stdc++.h>
#define N 10009
using namespace std;
string s;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	getline(cin,s);

	if(s[0]==s[7]&&s[1]==s[8]) cout<<1;
	else {
		cout<<"0000";return 0;
	}
	
	if(s[3]==s[10]&&s[4]==s[11]) cout<<1;
	else{
		cout<<"000";return 0;
	} 
	
	if((s[5]<='C'&&s[12]<='C')||(s[5]>='D'&&s[12]>='D')) cout<<1;
	else cout<<0;
	
	
	if((s[5]=='C'&&s[12]=='D')||(s[5]=='D'&&s[12]=='C')) cout<<0;
	else{
		if(s[5]-s[12]==1||s[5]-s[12]==-1||(s[5]=='D'&&s[12]=='F')||(s[5]=='F'&&s[12]=='D')) cout<<1;
		else cout<<0;
	}	
	
	return 0;
}
