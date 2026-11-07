#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
bool f1,f2,f3,f4;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if((int)s1[1]==(int)s3[1]) f1=1;
	if(!f1){
		cout<<f1<<f2<<f3<<f4;
		return 0;
	}
	if((int)s2[1]==(int)s4[1]) f2=1;
		if(!f2){
		cout<<f1<<f2<<f3<<f4;
		return 0;
	}
	if(s2[2]=='F'&&s4[2]=='D') f3=1,f4=1;
	if(s2[2]=='D'&&s4[2]=='F') f3=1,f4=1;
	if(s2[2]=='A'&&s4[2]=='B') f3=1,f4=1;
	if(s2[2]=='B'&&s4[2]=='A') f3=1,f4=1;
	if(s2[2]=='A'&&s4[2]=='C') f3=1;
	if(s2[2]=='C'&&s4[2]=='A') f3=1;
	if(s2[2]=='B'&&s4[2]=='C') f3=1,f4=1;
	if(s2[2]=='C'&&s4[2]=='B') f3=1,f4=1;
	if(!f3){
		cout<<f1<<f2<<f3<<f4;
		return 0;
	}
	cout<<f1<<f2<<f3<<f4;
	return 0;
}
