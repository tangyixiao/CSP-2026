#include<bits/stdc++.h>
#define int long long
using namespace std;
string c1,s1,c2,s2;
bool p1(){
	for(int i=0;i<c1.size();i++){
		if(c1[i]!=c2[i])return false;
	}
	return true;
}
bool p2(){
	for(int i=0;i<2;i++){
		if(s1[i]!=s2[i])return false;
	}
	return true;
}
bool p3(){
	int type1,type2;
	type1=(s1[2]=='D'||s1[2]=='F');
	type2=(s2[2]=='D'||s2[2]=='F');
	return type1==type2;
} 
bool p4(){
	if(s1[2]=='A'&&s2[2]=='C')return false;
	else if(s1[2]=='C'&&s2[2]=='A')return false;
	else return true;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(!p1())cout<<"0000";
	else if(!p2())cout<<"1000";
	else if(!p3())cout<<"1100";
	else if(!p4())cout<<"1110";
	else cout<<"1111";
}
