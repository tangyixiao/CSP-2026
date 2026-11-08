#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<"1";
	else cout<<"0";
	string a1=s1.substr(0,2);
	string a2=s2.substr(0,2);
	if(c1==c2&&a1==a2) cout<<"1";
	else cout<<"0";
	char b1=s1[s1.size()-1];
	char b2=s2[s2.size()-1];
	if(c1==c2&&a1==a2){
		if(b1=='A'){
			if(b2-b1<=2) cout<<"1";
			else cout<<"0";
		}
		else if(b1=='B'){
			if(abs(b2-b1)<=1) cout<<"1";
			else cout<<"0";
		}
		else if(b1=='C'){
			if(b2>b1) cout<<"0";
			else cout<<"1";
		}
		else if(b1=='D'){
			if(b2=='F') cout<<"1";
			else cout<<"0";
		}
		else if(b1=='F'){
			if(b2=='D') cout<<"1";
			else cout<<"0";
		}
	}
	else cout<<"0";
	if(a1==a2&&c1==c2&&abs(b1-b2)==1){
		if((b1=='C'&&b2!='D')||(b1=='D'&&b2!='C')) cout<<"1";
		else cout<<"0";
	}
	else cout<<"0";
	return 0;
}

