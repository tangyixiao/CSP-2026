#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	//1
	if(c1==c2) cout<<1;//是
	else cout<<0;//否
	//2
	if(s1[0]+s1[1]==s2[0]+s2[1]) cout<<1;//是
	else cout<<0;//否
	//3
	if('A'<=s1[2]<='C'||'D'<=s2[2]<='F') cout<<1;//是
	else cout<<0;//否
	//4
	if(s1[2]+1==s2[2]||s1[2]=='D'&&s2[2]=='F'){
		cout<<1;
	}//是
	else cout<<0;//否
	
	return 0;
}
