#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);

	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool f=0;
	if(c1==c2){
		cout<<'1';
	}
	else f=1,cout<<'0';
	if(!f && s1[0]+s1[1]==s2[0]+s2[1]){
		cout<<'1';
	}
	else f=1,cout<<'0';
	if(!f && (s1[2]<'D' && s2[2]<'D') || (s1[2]>'C' && s2[2]>'C')){
		cout<<'1';
	}
	else f=1,cout<<'0';
	if(!f && abs(s2[2]-s1[2])==1) cout<<'1';
	else cout<<'0';
//	cout<<s1.substr("a",5);
	return 0;
}
