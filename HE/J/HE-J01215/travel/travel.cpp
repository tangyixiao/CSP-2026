#include<bits/stdc++.h>
using namespace std;
string s1,s2,c1,c2;
bool f=0,f2=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			if(s1[2]=='A'&&s2[2]=='B')f=1;
			if(s1[2]=='A'&&s2[2]=='C')f=1;
			if(s1[2]=='B'&&s2[2]=='A')f=1;
			if(s1[2]=='B'&&s2[2]=='C')f=1;
			if(s1[2]=='C'&&s2[2]=='A')f=1;
			if(s1[2]=='C'&&s2[2]=='B')f=1;
			if(s1[2]=='D'&&s2[2]=='F')f=1;
			if(s1[2]=='F'&&s2[2]=='D')f=1;
			if(f){
				cout<<1;
				if(s1[2]=='A'&&s2[2]=='B')f2=1;
				if(s1[2]=='B'&&s2[2]=='A')f2=1;
				if(s1[2]=='B'&&s2[2]=='C')f2=1;
				if(s1[2]=='C'&&s2[2]=='B')f2=1;
				if(s1[2]=='D'&&s2[2]=='F')f2=1;
				if(s1[2]=='F'&&s2[2]=='D')f2=1;
				if(f2) cout<<1;
				else cout<<0;
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}
