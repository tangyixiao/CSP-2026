#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string c1,s1,c2,s2,is="";
int istp(char a,char b){
	if(a=='A'||a=='B'||a=='C'){
		if(b=='A'||b=='B'||b=='C'){
			return 1;
		}
	}
	if(a=='D'||a=='E'){
		if(b=='D'||b=='E'){
			return 1;
		}
	}
	return 0;
}
int isxl(char a,char b){
	if(abs(a-b)==1)return 1;
	return 0;
}
ll qw(string s){
	ll t=1,ans=0;
	for(int i=s.size()-1;i>=0;i--){
		ans+=t*(s[i]-'0');
		t*=10;
	}
	return ans;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)is+='1';
	else{
		cout<<"0000";
		return 0; 
	}
	string sz1="",sz2="";
	sz1+=s1[0],sz1+=s1[1],sz2+=s2[0],sz2+=s2[1];
	ll z1=qw(sz1),z2=qw(sz2);
	if(z1==z2)is+='1';
	else{
		cout<<"1000";
		return 0;
	}
	char e1=s1[2],e2=s2[2];
	if(istp(e1,e2))is+='1';
	else{
		cout<<"1100";
		return 0;
	}
	if(isxl(e1,e2)){
		is+='1';
		cout<<is;
		return 0;
	}
	else{
		cout<<"1110";
		return 0;
	}
	return 0;
}