#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	cout<<'1';
	if(s1>s2){
		swap(s1,s2);
	}
	if((s1[0]-48)*10+(s1[1]-48)*10!=(s2[0]-48)*10+(s2[1]-48)*10){
		cout<<"000";
		return 0;
	}
	cout<<'1';
	if(!((s1[2]=='A' and s2[2]=='B') or (s1[2]=='A' and s2[2]=='C') or (s1[2]=='B' and s2[2]=='C') or (s1[2]=='D' and s2[2]=='E'))){
		cout<<"00";
		return 0;
	}
	cout<<'1';
	if(!((s1[2]=='A' and s2[2]=='B') or (s1[2]=='B' and s2[2]=='C') or (s1[2]=='D' and s2[2]=='E'))){
		cout<<"0";
		return 0;
	}
	cout<<'1';
	return 0;
}