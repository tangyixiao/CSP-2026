#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("traver.in","r",stdin);
	freopen("traver.out","w",stdout);
	string ch1,z1,ch2,z2;
	cin>>ch1>>z1>>ch2>>z2;
	if(ch1==ch2)cout<<"0";
	else cout<<"1";
	if(z1[1]==z2[1]&&z1[0]==z2[0])cout<<"1";
	else cout<<"0";
	if(z1[2]=='A'||z1[2]=='B'||z1[2]=='C'&&z2[2]=='A'||z2[2]=='B'||z2[2]=='C')cout<<"1";
	else if(z1[2]=='D'||z1[2]=='E'&&z2[2]=='D'||z2[2]=='E')cout<<"1";
	else cout<<"0";
	if(z1[2]+1==z2[2]||z1[2]==z2[2]+1)cout<<"1";
	cout<<"0";
	return 0;
}