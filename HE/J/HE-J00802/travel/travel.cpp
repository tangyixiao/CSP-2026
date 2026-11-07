#include<bits/stdc++.h>
using namespace std;
bool tyc(string s1,string s2){
	return (s1[2]<'D'&&s2[2]<'D')||(s1[2]>'C'&&s2[2]>'C');
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;string s1,s2;
	cin>>a>>s1>>b>>s2;
	bool b1=0,b2=0,b3=0;
	if(a==b){cout<<1;b1=1;}
	else cout<<0;
	if(b1&&s1[0]==s2[0]&&s1[1]==s2[1]){cout<<1;b2=1;}
	else cout<<0;
	if(b2&&tyc(s1,s2)){cout<<1;b3=1;}
	else cout<<0;
	if(b3&&abs(s1[2]-s2[2])==1)cout<<1;
	else cout<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
