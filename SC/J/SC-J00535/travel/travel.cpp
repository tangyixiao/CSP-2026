#include<bits/stdc++.h>
#define int long long
using namespace std;
char s1[5],s2[5];
int c1,c2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1[1]>>s1[2]>>s1[3]>>c2>>s2[1]>>s2[2]>>s2[3];
	if(c1==c2){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	int si1=(s1[1]-'0')*10+(s1[2]-'0'),si2=(s2[1]-'0')*10+(s2[2]-'0');
	if(si1==si2){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	if((s1[3]<='C'&&s2[3]<='C')||s1[3]>='D'&&s2[3]>='D'){
		cout<<"1";
	}else{
		cout<<"00";
		return 0;
	}
	if(s1[3]-'A'==s2[3]-'A'+1||s1[3]-'A'==s2[3]-'A'-1){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
}