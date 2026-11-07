#include<bits/stdc++.h>
#define endline cout<<"\n"
using namespace std;
string s1,c1,s2,c2;
bool check(string str1,string str2){
	if((str1[2]=='E'&&str2[2]=='D')||(str1[2]=='D'&&str2[2]=='E')) return true;
	if(str1[2]=='A'&&str2[2]=='B') return true;
	if(str1[2]=='B'&&(str2[2]=='A'||str2[2]=='C')) return true;
	return false;
}int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	freopen("travel.in","r",stdin);freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<1;
	else{
		cout<<"0000";
		return 0;
	}if(s2[0]==s1[0]&&s2[1]==s1[1]) cout<<1;
	else{
		cout<<"000";
		return 0;
	}if((s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')||((s1[2]=='E'&&s2[2]=='D')||(s1[2]=='D'&&s2[2]=='E'))) cout<<1;
	else{
		cout<<"00";
		return 0;
	}if(check(s1,s2)) cout<<1;
	else cout<<"0";
	return 0;
} 