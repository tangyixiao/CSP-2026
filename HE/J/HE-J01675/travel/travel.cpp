#include<bits/stdc++.h>
#define ll long long
//#define ld long double
//#define d double
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c) cout<<"1";
	else{
		cout<<"0000\n";
		return 0;
	}
	if(b[0]==d[0] && b[1]==d[1]) cout<<"1";
	else{
		cout<<"000\n";
		return 0;
	}
	int ch1=b[2],ch2=d[2];
	if((ch1=='A' && ch2=='B')||(ch1=='B' && ch2=='A')||(ch1=='A' && ch2=='C')||(ch1=='C' && ch2=='A')||(ch1=='C' && ch2=='B')||(ch1=='B' && ch2=='C')||(ch1=='D' && ch2=='F')||(ch1=='F' && ch2=='D')) cout<<"1";
	else{
		cout<<"00\n";
		return 0;
	}
	if((ch1=='A' && ch2=='B')||(ch1=='B' && ch2=='A')||(ch1=='C' && ch2=='B')||(ch1=='B' && ch2=='C')||(ch1=='D' && ch2=='F')||(ch1=='F' && ch2=='D')) cout<<"1\n";
	else{
		cout<<"0\n";
	}
	return 0;
}
