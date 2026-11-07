#include<bits/stdc++.h>
#define ll long long
using namespace std;
string c1,c2,c3,c4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>c1>>c2>>c3>>c4;
	if(c1!=c3){
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	string s1="";
	string s2="";
	s1+=c2[0];
	s1+=c2[1];
	s2+=c4[0];
	s2+=c4[1];
	if(s1!=s2){
		cout<<"000";
		return 0;
	}
	cout<<"1";
	if(c2[2]=='A'||c2[2]=='B'||c2[2]=='C'){
		if(c4[2]=='A'||c4[2]=='B'||c4[2]=='C'){
			cout<<"1";
		}else{
			cout<<"00";
			return 0;
		}
	}else{
		if(c4[2]=='D'||c4[2]=='F'){
			cout<<"1";
		}else{
			cout<<"00";
			return 0;
		}
	}
	if(c2[2]=='A'||c2[2]=='C'){
		if(c4[2]=='B')cout<<"1";
		else cout<<"0";
	}
	else if(c2[2]=='B')cout<<"1";
	else if(c2[2]=='D'||c2[2]=='F')cout<<"1";
	return 0;
} 
