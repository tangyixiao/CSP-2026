#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
bool b;
bool c[100];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	c['F']=1;
	c['D']=1;
	cin>>s1>>s2>>s3>>s4;
	if(s1==s3){
		cout<<1;
		b=1;
	}
	else{
		b=0;
		cout<<0;
	}
	if(s2[0]==s4[0]&&s2[1]==s4[1]&&b==1){
		cout<<1;
		b=1;
	}
	else{
		b=0;
		cout<<0;
	}
	if(c[s2[2]]==c[s4[2]]&&b==1){
		cout<<1;
		b=1;
	}
	else{
		b=0;
		cout<<0;
	}
	if(((s2[2]+1==s4[2]||s2[2]-1==s4[2])||(s2[2]=='D'&&s4[2]=='F')||(s2[2]=='F'&&s4[2]=='D'))&&b==1){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}
