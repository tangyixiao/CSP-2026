#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int c3,c4;
	c3=s1[1]-48+(s1[0]-48)*10;
	c4=s2[1]-48+(s2[0]-48)*10;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
    if(c4!=c3){
		cout<<"1000";
		return 0;
	}
	if(s1[2]>='D'&&s2[2]<='C'){
		cout<<"1100";
		return 0;
	}
	else if(s2[2]>='D'&&s1[2]<='C'){
		cout<<"1100";
		return 0;
	}
	if(s1[2]=='D'&&s2[2]=='F'||s2[2]=='D'&&s1[2]=='F'){
		cout<<"1111";
		return 0;
	}
	else if(s1[2]+1==s2[2]||s1[2]-1==s2[2]){
		cout<<"1111"; 
		return 0;
	}
	cout<<"1110";
	return 0;
}
