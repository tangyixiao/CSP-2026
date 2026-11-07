#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,ans;
int t,t1,t2,f=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin>>c1>>s1>>c2>>s2;
	// 1
	if(c1==c2) ans+="1";
	else{
		cout<<"0000"<<'\n';
		return 0;
	}
	// 2
	t=1,t1=0,t2=0;
	for(int i=s1.size()-2;i>=0;i--){
		t1=t1+(s1[i]-'0')*t;
		t=t*10;
	}
	t=1;
	for(int i=s2.size()-2;i>=0;i--){
		t2=t2+(s2[i]-'0')*t;
		t=t*10;
	}
	if(t1==t2) {
		ans+="1";
	}
	else{
		cout<<"1000"<<'\n';
		return 0;
	}
	// 3
	if((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='A'&&s2[2]=='C')||(s1[2]=='B'&&s2[2]=='C')||
	(s1[2]=='C'&&s2[2]=='B')||(s1[2]=='C'&&s2[2]=='A')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D')){
		ans+="1";
		f=1;
	}
	if(!f) {
		cout<<"1100"<<'\n';
		return 0;
	}
	// 4
	char ch1=s1[2],ch2=s2[2];
	if((ch1=='A'&&ch2=='C')||(ch1=='C'&&ch2=='A')){
		cout<<"1110"<<'\n';
		return 0;
	}
	
	cout<<"1111"<<'\n';
	return 0;
}