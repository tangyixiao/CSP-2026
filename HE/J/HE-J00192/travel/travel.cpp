#include <bits/stdc++.h>
using namespace std;
#define ll long long
string S;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	if(a1!=b1){
		cout<<"0000";
		return 0;
	}
	S.append("1");
	if(a2[0]==b2[0]&&a2[1]==b2[1]){
		S.append("1");
		if((b2[2]=='D'&&a2[2]=='F')||(b2[2]=='F'&&a2[2]=='D')){
			S.append("1");
		}
		else if(a2[2]!='D'&&a2[2]!='F'&&b2[2]!='D'&&b2[2]!='F'){
			S.append("1");
		}
		else{
			S.append("0");
		}
	}
	else{
		S.append("00");
	}
	int x;
	x = abs(a2[2] - b2[2]);
	if((a2[2]=='C'&&b2[2]=='D')||(a2[2]=='D'&&b2[2]=='C')){
		x = 0;
	}
	if(x == 1&&S[1]=='1'){
		S.append("1");
	}
	else{
		S.append("0");
	}
	cout<<S;
	return 0;
} 
