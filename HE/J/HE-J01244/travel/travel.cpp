#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	int f=0;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
	}
	else cout<<"0";
	if(s1[3]==s2[3]){
		cout<<"1";
		if(s1[3]<='C'&&s2[3]<='C'||s1[3]>='D'&&s2[3]>='D')cout<<"1";
		else cout<<"0";
		if(s1[3]=='A'&&s2[3]=='B'){
			cout<<"1";
			f=1;
	}
		if(s1[3]=='B'&&s2[3]=='C'){
			cout<<"1";
			f=1;
	}
		if(s1[3]=='D'&&s2[3]=='F'){
			cout<<"1";
			f=1;
	}
	}
	else cout<<"0";
	
	if(f==0)cout<<"0";
	else cout<<"0";
}
