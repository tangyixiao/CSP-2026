#include <bits/stdc++.h>
using namespace std;
bool in(char a,string b){
	for(int i=0;i<b.length();i++){
		if(b[i]==a)return 1;
	}
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,a2,b1,b2,l="ABC",r="DF",l1="AB",l2="BC";
	cin>>a1>>a2>>b1>>b2;

	if(a1==b1) cout<<1;
	else cout<<0;

	if(a1==b1&&a2[0]==b2[0]&&a2[1]==b2[1]) cout<<1;
	else cout<<0;

	if(a1==b1&&a2[0]==b2[0]&&a2[1]==b2[1]){
		if(in(a2[2],l)&&in(b2[2],l)) cout<<1;
		else if(in(a2[2],r)&&in(b2[2],r)) cout<<1;
		else cout<<0;
	}else cout<<0;

	if(in(a2[2],l1)&&in(b2[2],l1)&&a2[2]!=b2[2]) cout<<1;
	else if(in(a2[2],l2)&&in(b2[2],l2)&&a2[2]!=b2[2]) cout<<1;
	else if(in(a2[2],r)&&in(b2[2],r)&&a2[2]!=b2[2]) cout<<1;
	else cout<<0;
	fclose(stdin);
	fclose(stdout);
}