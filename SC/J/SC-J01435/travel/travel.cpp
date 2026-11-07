#include<bits/stdc++.h>
using namespace std;
bool check(char a){
	if('A'<=a&&'C'>=a)return true;
	else{return false;}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0);
	string s1,s2,s3,s4;cin>>s1>>s2>>s3>>s4;
	if(s1==s3){
		cout<<"1";
		if(s2[0]==s4[0]&&s2[1]==s4[1]){
			cout<<"1";
			char c1=s2[2],c2=s4[2];
			if(check(c1)==check(c2)){
				cout<<"1";
				if(!check(c1))cout<<"1";
				else if(abs(int(c1)-int(c2))==1)cout<<"1";
				else{cout<<"0";}
			}
			else{cout<<"00";}
		}
		else{cout<<"000";}
	}
	else{cout<<"0000";}
	return 0;
}