#include <bits/stdc++.h>
using namespace std;
string s1,s2,x1,x2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>x1>>s2>>x2;
	if(s1!=s2){
		cout <<"0000";
		return 0;
	}
	if(x1[0]!=x2[0] || x1[1]!=x2[1]){
		cout <<"1000";
		return 0;
	}
	if((x1[2]<='C' && x2[2]>='D')||(x1[2]>='D' && x2[2]<='C')){
		cout <<"1100";
		return 0;
	}
	if((x1[2]=='A' && x2[2]=='B')||(x1[2]=='B' && x2[2]=='A')||
	(x1[2]=='B' && x2[2]=='B')||(x1[2]=='C' && x2[2]=='B')||
	(x1[2]=='C' && x2[2]=='D')||(x1[2]=='D' && x2[2]=='C')){
		cout <<"1111";
		return 0;
	}
	cout <<"1110";
	return 0;
}
