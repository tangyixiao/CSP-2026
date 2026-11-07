#include<bits/stdc++.h>
using namespace std;
string a1,a2,b1,b2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>b1>>b2;
	if(a1!=b1){cout<<"0000";return 0;}
	else {
		cout<<"1";
		int a,b;
		char c;
		c=a2[0];
		a=int(c-'0');
		c=a2[1];
		a=a*10+int(c-'0');
		c=b2[0];
		b=int(c-'0');
		c=b2[1];
		b=b*10+int(c-'0');
		if(a!=b){cout<<"000";return 0;}
		else{
			cout<<"1";
			char da,db;
			da=a2[2],db=b2[2];
			if(((da=='A'||da=='B'||da=='C')&&(db=='A'||db=='B'||db=='C'))||((da=='D'||da=='F')&&(db=='D'||db=='F'))){
				cout<<"1";
				if((da=='D'||da=='F')&&(db=='D'||db=='F')){cout<<"1";return 0;}
				if(((da=='A'||da=='B')&&(db=='A'||db=='B'))||((da=='B'||da=='C')&&(db=='B'||db=='C'))){ cout<<"1";return 0;}
				cout<<"0";
			}else{cout<<"00";return 0;}
		}
	}
	return 0;
}