#include<bits/stdc++.h>
using namespace std;
char s[5][5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>s[1][1]>>s[1][2];
	cin>>s[2][1]>>s[2][2]>>s[2][3];
	cin>>s[3][1]>>s[3][2];
	cin>>s[4][1]>>s[4][2]>>s[4][3];
	if(s[1][1]==s[3][1]&&s[1][2]==s[3][2])cout<<1;
	else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(s[2][1]==s[4][1]&&s[2][2]==s[4][2])cout<<1;
	else{
		cout<<0<<0<<0;
		return 0;
	}
	if((s[2][3]<='C'&&s[4][3]<='C')||(s[2][3]>'C'&&s[4][3]>'C'))cout<<1;
	else{
		cout<<0<<0;
		return 0;
	}
	if(s[2][3]+1==s[4][3]||s[2][3]-1==s[4][3])cout<<1;
	else cout<<0;
	return 0;
}
