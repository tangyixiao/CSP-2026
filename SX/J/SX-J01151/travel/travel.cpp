#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<"0000";
		return 0;
	}
	string ss1=s1,ss2=s2;
	s1.erase(s1.size()-1,1);
	s2.erase(s2.size()-1,1);
	if(s1==s2){
		cout<<1;
	}
	else{
		cout<<"000";
		return 0;
	}
	if(ss1[2]<='C'&&ss2[2]<='C'||ss1[2]>='D'&&ss2[2]>='D'){
		cout<<1;
	}
	else{
		cout<<"00";
		return 0;
	}
	if(abs(ss1[2]-ss2[2])<=1){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}