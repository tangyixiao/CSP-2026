#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
string ss1="",ss2="";
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	ss1+=s1[0];
	ss1+=s1[1];
	ss2+=s2[0];
	ss2+=s2[1];
	if(ss1!=ss2){
		cout<<"000";
		return 0;
	}
	cout<<"1";
	ss1=s1[2];
	ss2=s2[2];
	if((ss1=="C" && ss2=="D") || (ss1=="D" && ss2=="C")){
		cout<<"00";
		return 0;
	}
	cout<<"1";
	if((ss1=="D" && ss2=="F") || (ss1=="F" && ss2=="D")){
		cout<<"1";
		return 0;
	}
	if((ss1=="A" && ss2=="B") || (ss1=="B" && ss2=="A")){
		cout<<"1";
		return 0;
	}
	if((ss1=="B" && ss2=="C") || (ss1=="C" && ss2=="B")){
		cout<<"1";
		return 0;
	}
	cout<<"0"; 
	return 0;
} 