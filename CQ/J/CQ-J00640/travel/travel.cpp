#include <bits/stdc++.h>
using namespace std;
int num1,num2;
string s1,s2;
char c1,c2;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>num1>>s1>>num2>>s2;
	if(num1==num2) cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	c1=s1[2];
	c2=s2[2];
	if((s1[0]-'0')*10+s1[1]-'0'==(s2[0]-'0')*10+s2[1]-'0') cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	if(c1<='C'&&c2<='C'||c1>='D'&&c2>='D') cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	if(abs(c1-c2)==1) cout<<1;
	else cout<<0;
	return 0;
}
