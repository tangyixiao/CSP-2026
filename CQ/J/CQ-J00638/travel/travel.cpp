#include<bits/stdc++.h>
using namespace std;
string s1,s2,c1,c2;
bool flag=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000\n";
		return 0;
	}
	if(s1[0]!=s2[0]||s1[1]!=s2[1]){
		cout<<"1000\n";
		return 0;
	}
	if(((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='D'||s2[2]=='F'))||((s2[2]=='A'||s2[2]=='B'||s2[2]=='C')&&(s1[2]=='D'||s1[2]=='F'))){
		cout<<"1100\n";
		return 0;
	}
	if((s1[2]=='A'&&s2[2]=='B')||(s2[2]=='A'&&s1[2]=='B')||(s1[2]=='B'&&s2[2]=='C')||(s2[2]=='C'&&s1[2]=='B')||(s1[2]=='D'&&s2[2]=='F')||(s2[2]=='D'&&s1[2]=='F')){
		flag=1; 
	}
	if(flag==0){
		cout<<"1110\n";
		return 0;
	}
	cout<<"1111\n";
	return 0;
} 
