#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
string s1,s2,s3,s4;
ll l1,l2,l3,l4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>s1;
	cin>>s2;
	cin>>s3;
	cin>>s4;
	if(s1==s3){
		cout<<1;
	}else{
		cout<<0;
	}
	string s5,s6;
	s5=s2.substr(0,2);
	s6=s4.substr(0,2);
	if(s1==s3&&s5==s6){
		cout<<1;
	}else{
		cout<<0;
	}
	if(s1==s3&&s5==s6&&((s2[2]>='A'&&s2[2]<='C'&&s4[2]>='A'&&s4[2]<='C')||(s2[2]>='D'&&s2[2]<='F'&&s4[2]>='D'&&s4[2]<='F'))){
		cout<<1;		
	}else{
		cout<<0;
	}
	if(s1==s3&&s5==s6&&((s2[2]>='A'&&s2[2]<='C'&&s4[2]>='A'&&s4[2]<='C')||(s2[2]>='D'&&s2[2]<='F'&&s4[2]>='D'&&s4[2]<='F'))&&((abs(s2[2]-s4[2])==1&&!((s2[2]=='C'&&s4[2]=='D')||(s2[2]=='D'&&s4[2]=='C')))||(s2[2]=='D'&&s4[2]=='F')||(s4[2]=='D'&&s2[2]=='F'))){
		cout<<1;		
	}else{
		cout<<0;
	}
	return 0;
}
