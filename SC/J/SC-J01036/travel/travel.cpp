#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
int main(){
	freopen("travel.in","r",stdin),freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s1!=s3) cout<<"0000";
	else{
		int x=(s2[0]-'0')*10+s2[1]-'0',y=(s4[0]-'0')*10+s4[1]-'0';
		if(x!=y) cout<<"1000";
		else{
			char c1=s2[2],c2=s4[2];
			if(c1>c2) swap(c1,c2);
			if(c1<='C'&&c2>='D') cout<<"1100";
			else if(c1=='A'&&c2=='C') cout<<"1110";
			else cout<<"1111";
		}
	}
	return 0;
}