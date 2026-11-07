#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
char a,b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000"<<endl;
		return 0;
	}
	cout<<"1";
	if(s1[0]*10+s1[1]!=s2[0]*10+s2[1]){
		cout<<"000"<<endl;
		return 0; 
	}
	cout<<"1";
	a=s1[2];
	b=s2[2];
	if(a!=b){
		cout<<"00"<<endl;
		return 0;
	}
	cout<<"1";
	
	if((a=='C' && b=='D') || (a=='D' && b=='C')){
		cout<<"0"<<endl;
		return 0;
	}
	cout<<"1"<<endl;
	return 0;
} 