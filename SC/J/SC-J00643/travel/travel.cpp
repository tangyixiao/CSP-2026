#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,t1="ABC",t2="DF";
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	string tmp=""+s1[0]+s1[1];
	string ten=""+s2[0]+s2[1];
	
	if(tmp!=ten){
		cout<<"000";
		return 0;
	}
	cout<<"1";
	if(t1.find(s1[2])!=-1&&t2.find(s2[2])!=-1){
		cout<<"00";
		return 0;
	}
	if(t1.find(s2[2])!=-1&&t2.find(s1[2])!=-1){
		cout<<"00";
		return 0;
	}
	cout<<"1";
	if(s1[2]=='A'&&s2[2]=='C'){
		cout<<"0";
		return 0;
	}
	if(s1[2]=='C'&&s2[2]=='A'){
		cout<<"0";
		return 0;
	}
	cout<<"1";
	return 0;
} 