#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("treval.in","r",stdin);
	freopen("treval.out","w",stdout);
	int a,b;
	string a1,b1;
	cin>>a>>a1>>b>>b1;
	if(a==b)cout<<"1";
	else cout<<"0";
	if(a==b&&a1[1]==b1[1]&&a1[0]==b1[0])cout<<"1";
	else cout<<"0";
	if(a==b&&(a1[1]==b1[1])&&((a1[2]=='A'||a1[2]=='B'||a1[2]=='C')&&(b1[2]=='A'||b1[2]=='B'||b1[2]=='C')) || ((a1[2]=='D'||a1[2]=='F')&&(a1[2]=='D'||a1[2]=='F'))){
		cout<<"1";
	}
	else cout<<"0";
	if(a==b&&a1[1]==b1[1]&&((a1[2]=='A'&&b1[2]=='B') || (a1[2]=='B'&&(b1[2]=='C'||b1[2]=='A')) || (b1[2]=='C'&&b1[2]=='B')) || (a1[2]=='D'&&b1[2]=='F')){
		cout<<"1";
	}
	else cout<<"0";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
