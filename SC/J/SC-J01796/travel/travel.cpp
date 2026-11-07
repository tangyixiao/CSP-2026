#include<bits/stdc++.h>
using namespace std;
int check(char s){
	if(s>='A'&&s<='C')return 1;
	return 2;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);cout.tie(nullptr);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";return 0;
	}else{
		cout<<"1";
	}
	if(s1[0]!=s2[0]||s1[1]!=s2[1]){
		cout<<"000";
	}else{
		cout<<"1";
		if(check(s1[2])==check(s2[2])){
			cout<<"1"<<(abs(s1[2]-s2[2])==1);
		}else{
			cout<<"00";
		}
	}
	return 0;
}