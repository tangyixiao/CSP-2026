#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			int b=0;
			if(s1[2]=='F'&&s2[2]=='D') b=2;
			if(s1[2]=='D'&&s2[2]=='F') b=2;
			if(s1[2]=='A'&&s2[2]=='B') b=2;
			if(s1[2]=='B'&&s2[2]=='A') b=2;
			if(s1[2]=='B'&&s2[2]=='C') b=2;
			if(s1[2]=='C'&&s2[2]=='B') b=2;
			if(s1[2]=='A'&&s2[2]=='C') b=1;
			if(s1[2]=='C'&&s2[2]=='A') b=1;
			if(b==0)
				cout<<"00";
			if(b==1)
				cout<<"10";
			if(b==2)
				cout<<"11";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}