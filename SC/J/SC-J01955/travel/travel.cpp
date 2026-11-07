#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int a=0,b=0;
	if(s1[2]=='D')a=6;
	else if(s1[2]=='D')b=6;
	else if(s1[2]!='D'&&s2[2]!='D')a=s1[2]-'A',b=s2[2]-'A';
	if(c1==c2){
		cout<<"1";
		if(s1[0]==s2[0]&&s1[1]==s2[1])cout<<"1";
		else {
			cout<<"000";
			return 0;
		}
		if(abs(a-b)==1)cout<<"11";
		else if(abs(a-b)==2)cout<<"10";
		else cout<<"00";
	}
	else {
		cout<<"0000";
		return 0;
	}
	return 0;
}