#include<bits/stdc++.h>
using namespace std;
int Read() {
	int x = 0, f = 1;
	char c;
	c = getchar();
	while (c < '0' || c > '9') {
		if (c == '-') {
			f = -1;
		}
		c = getchar();
	}
	while (c >= '0' && c <= '9') {
		x = x * 10 + (c - '0');
		c = getchar();
	}
	return x*f;
}
string s1,s2,s3,s4;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s1!=s3){
		cout<<"0000";
		return 0;
	}else if(s2[0]!=s4[0]||s2[1]!=s4[1]){
		cout<<"1000";
		return 0;
	}else if(!((s2[2]<='C'&&s4[2]<='C')||(s2[2]>'C'&&s4[2]>'C'))){
		cout<<"1100";
		return 0;
	}else{
		if(s2[2]>s4[2]){
			swap(s2[2],s4[2]);
		}
		if(s4[2]-s2[2]!=1){
			cout<<"1110";
			return 0;
		}else{
			cout<<"1111";
			return 0;
		}
	}
	return 0;
}