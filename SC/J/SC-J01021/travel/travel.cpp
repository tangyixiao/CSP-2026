#include<bits/stdc++.h>
using namespace std;
string s[5];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s[1]>>s[2]>>s[3]>>s[4];
	if(s[1]==s[3]){
		cout<<1;
	}else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(s[2][0]==s[4][0]&&s[2][1]==s[4][1]){
		cout<<1;
	}else{
		cout<<0<<0<<0;
		return 0;
	}
	if((s[2][2]<='C'&&s[4][2]<='C')||(s[2][2]>'C'&&s[4][2]>'C')){
		cout<<1;
	}else{
		cout<<0<<0;
		return 0;
	}
	int a=s[2][2],b=s[4][2];
	if(a==b+1||a==b-1){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}