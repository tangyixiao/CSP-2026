#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
string s;
int main(){
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	if(s1[0]!=s2[0]||s1[1]!=s2[1]){
		cout<<"1000";
		return 0;
	}
	if((s1[2]<='C'&&s2[2]>='D')||(s1[2]>='D'&&s2[2]<='C')){
		cout<<"1100";
		return 0;
	}
	if(s1[2]+1==s2[2]||s1[2]-1==s2[2]) cout<<"1111";
	else cout<<"1110";
	return 0;
}
