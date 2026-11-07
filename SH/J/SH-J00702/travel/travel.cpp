#include<bits/stdc++.h>
#define int long long
using namespace std;
string s1,s2,s3,s4;
bool f1(char c){
	if(c=='A'||c=='B'||c=='C')return true;
	return false;
}
bool f2(char c){
	if(c=='A'||c=='B'||c=='C')return false;
	return true;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s1!=s3){
		cout<<"0000";
		return 0;
	} 
	cout<<1;
	if(s2[0]==s4[0]&&s2[1]==s4[1]){
		cout<<1;
	}
	else{
		cout<<"000";
		return 0;
	}
	if((f1(s2[2])&&f1(s4[2]))||(f2(s2[2])&&f2(s4[2]))){
		cout<<1;
	}
	else cout<<0;
	
	if(abs(long(s2[2]-s4[2]))==1&&max(s2[2],s4[2])!='D'){
		cout<<1;
	}
	else cout<<0;
	return 0;
} 
