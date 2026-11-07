#include<bits/stdc++.h>
#define int long long
using namespace std;
string s[5];
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s[1]>>s[2]>>s[3]>>s[4];
	if(((s[1][0]-'0')==(s[3][0]-'0'))&&((s[1][1]-'0')==(s[3][1]-'0'))){
		cout<<1;
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(((s[2][0]-'0')==(s[4][0]-'0'))&&((s[2][1]-'0')==(s[4][1]-'0'))){
		cout<<1;
	}
	else{
		cout<<"000";
		return 0;
	}
	if((s[2][2]-'D'>=0)&&(s[4][2]-'D'>=0)){
		cout<<11;
		return 0;
	}
	else if((s[2][2]-'C'<=0)&&(s[4][2]-'C'<=0)){
		cout<<1;
	}
	else{
		cout<<"00";
		return 0;
	}
	if(((s[2][2]-'A'==0)&&(s[4][2]-'A'==2))||((s[4][2]-'A'==0)&&(s[2][2]-'A'==2))){
		cout<<0;
		return 0;
	}
	cout<<1;
	return 0;
} 
