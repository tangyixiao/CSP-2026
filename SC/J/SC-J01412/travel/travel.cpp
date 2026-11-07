#include<bits/stdc++.h>
using namespace std;
bool check(string s){
	if(s[2]=='A'||s[2]=='B'||s[2]=='C'){
		return 1;
	}
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	for(int i=0;i<=1;i++){
		if(s1[i]!=s3[i]){
			cout<<"0000";
			return 0;
		}
	}
	cout<<1;
	for(int i=0;i<=1;i++){
		if(s2[i]!=s4[i]){
			cout<<"000";
			return 0;
		}
	}
	cout<<1;
	if(check(s2)!=check(s4)){
		cout<<"00";
		return 0;
	}
	cout<<1;
	char a=s2[2],b=s4[2];
	if(a==char(b-1)||char(a-1)==b){
		cout<<1;
	}
	else cout<<"0";
	return 0;
} 