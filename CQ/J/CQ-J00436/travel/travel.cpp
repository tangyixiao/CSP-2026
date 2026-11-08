#include<bits/stdc++.h>
using namespace std;
string s,s2,s3,s4;
int vis[7]={1,1,1,2,2};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s>>s2>>s3>>s4;
	if(s==s3)cout<<"1";
	else{
		cout<<"0000";
		return 0;
	}
	string t="",t2="";
	t+=s2[0];
	t+=s2[1];
	t2+=s4[0];
	t2+=s4[1];
	if(t==t2)cout<<"1";
	else{
		cout<<"000";
		return 0;
	}
	char x=s2[2],y=s4[2];
	if(vis[x-'A']==vis[y-'A'])cout<<"1";
	else{
		cout<<"00";
		return 0;
	}
	if(abs(x-y)==1)cout<<"1";
	else cout<<"0";
	return 0;
}
