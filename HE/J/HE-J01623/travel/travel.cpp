#include<bits/stdc++.h>
using namespace std;
string s,s1,q,q1;
int c;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s>>s1>>q>>q1;
	if(s==q){
		cout<<1;
		c++;
	} 
	else cout<<0;
	if(s1[0]==q1[0]&&s1[1]==q1[1]&&c==1){
		cout<<1;
		c++;
	}
	else cout<<0;
	if(((s1[2]=='A'&&q1[2]=='B')||(s1[2]=='A'&&q1[2]=='C')||(s1[2]=='B'&&q1[2]=='A')||(s1[2]=='B'&&q1[2]=='C')||(s1[2]=='C'&&q1[2]=='A')||(s1[2]=='C'&&q1[2]=='B')||(s1[2]=='D'&&q1[2]=='F')||(s1[2]=='F'&&q1[2]=='D'))&&c==2){
		cout<<1;
		c++;
	}
	else cout<<0;
	if(((s1[2]=='A'&&q1[2]=='B')||(s1[2]=='B'&&q1[2]=='A')||(s1[2]=='B'&&q1[2]=='C')||(s1[2]=='C'&&q1[2]=='B')||(s1[2]=='D'&&q1[2]=='F')||(s1[2]=='F'&&q1[2]=='D'))&&c==3){
		cout<<1;
	}
	else cout<<0;
	return 0;
}
