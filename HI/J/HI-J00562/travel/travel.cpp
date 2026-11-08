#include <bits/stdc++.h>
using namespace std;
int stoi(string s){
	int ans=0;
	for(int i=0;i<s.size();i++){
		ans+=(s[i]-'0')*pow(10,i);
	}
	return ans;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int rl=stoi(c1),xl=stoi(c2);
	bool r1,r2,r3,r4;
	if((rl<=16 && xl<=16) || (rl>16 && xl>16)){
		r1=1;
	}else{
		r1=0;
	}
	if(r1 && s1[0]==s2[0] && s1[1]==s2[1]){
		r2=1;
	}else{
		r2=0;
	}
	if(r2 && (s1[2]>='A' && s1[2]<='C')|| (s1[2]>='D'&& s1[2]<='F')){
		r3=1;
	}else{
		r3=0;
	}if(r3&&(s1[2]+1==s2[2]||s1[2]-1==s2[2])){
		r4=1;
	}else{
		r4=0;
		
	}
	cout<<r1<<r2<<r3<<r4;
	return 0;
}

