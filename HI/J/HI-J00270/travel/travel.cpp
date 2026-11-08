#include<bits/stdc++.h>
using namespace std;
int c,c1,a,b;
string s,s1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>c1>>s1;
	if(c!=c1){
		cout<<"0000";
		return 0;
	}
	else cout<<"1";
	if((s[0]!=s1[0]) || s[1]!=s1[1]){
		cout<<"000";
		return 0;
	}
	else cout<<"1";
	if(s[2]=='D' || s[2]=='F')a=1;
	if(s1[2]=='D' || s1[2]=='F')b=1;
	if(a!=b){
		cout<<"00";
		return 0;
	}
	else cout<<"1";
	if((s[2]+=1)==s1[2] || (s[2]-=1)==s1[2])cout<<"1";
	else cout<<"0";
	return 0;
}	
