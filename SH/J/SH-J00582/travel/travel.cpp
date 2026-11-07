#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	bool d=true;
	int c1,c2;
	string s1,s2;
	cin>>c1;
	cin>>s1;
	cin>>c2;
	cin>>s2;
	if(c1==c2){
		cout<<1;
	}else{
		cout<<0;
		d=false;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&d){
		cout<<1;
	}else{
		cout<<0;
		d=false;
	}
	if(((s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D')||(s1[2]=='A'&&s2[2]=='B')||(s1[2]=='A'&&s2[2]=='C')||(s1[2]=='C'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='C'&&s2[2]=='A')||(s1[2]=='B'&&s2[2]=='C'))&&d){
		cout<<1;
	}else{
		cout<<0;
		d=false;
	}
	if(((s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D')||(s1[2]=='A'&&s2[2]=='B')||(s1[2]=='C'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='B'&&s2[2]=='C'))&&d){
		cout<<1;
	}else{
		cout<<0;
		d=false;
	}
	return 0;
}
