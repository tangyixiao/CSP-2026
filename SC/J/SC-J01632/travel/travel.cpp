#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.out","w",stdout);
	freopen("travel.in","r",stdin);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	string a1,a2;
	a1+=s1[0]+s1[1],a2+=s2[0]+s2[1];
	if(c1==c2){
	   cout<<1;
	   if(a1==a2){
	      cout<<1;
		  int q1,q2;
		  if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C') q1=1;
		  if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C') q2=1;
		  if(s1[2]=='D'||s1[2]=='E') q1=2;
		  if(s2[2]=='D'||s2[2]=='E') q2=2;
		  if(q1==q2){
		  	cout<<1;
		  	if(s1[2]+1==s2[2]||s1[2]-1==s2[2]) cout<<1;
		  	else cout<<0;
		  }
		  else cout<<0<<0;
		  }
	   else cout<<0<<0<<0;
	}
	else cout<<0<<0<<0<<0;
    return 0;}
