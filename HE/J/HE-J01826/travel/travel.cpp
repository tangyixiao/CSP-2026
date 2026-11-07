#include<bits/stdc++.h>
using namespace std;
int s1,s2;
string c1,c2;
int main(){
	freopen("travel.in","r",stdin);
	freoprn("travel.out","w",stdout);
	cin>>s1>>c1>>s2>>c2;
	if(s1==s2)
		cout<<1;
	else{
		cout<<0000;
		return 0;
	}
	if(c1[0]==c2[0]&&c1[1]==c2[1]){
		cout<<1;
	}
	else{
		cout<<000;
		return 0;
	}
	int a=0,b=0;
	if(c1[2]=='F') a=1;
	if(c2[2]=='F') b=1;
	if(c1[2]=='D') a=1;
	if(c2[2]=='D') b=1;
	if(a==b) cout<<1;
	else{
		cout<<00;
		return 0;
	}
	if(a==1&&b==1){
		cout<<1;
		return 0;
	}
	else if(c1[2]=='A'&&c2[2]=='B'||c1[2]=='B'&&c2[2]=='A'
		  ||c2[2]=='C'&&c1[2]=='B'||c2[2]=='B'&&c1[2]=='C'){
		  	cout<<1;
		  }
	else cout<<0;
	return 0;
}
