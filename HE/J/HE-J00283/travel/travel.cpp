#include<bits/stdc++.h>
using namespace std;
bool check(char c){
	if (c=='D'||c=='F')return 0;
	else return 1;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string x,y;cin>>a>>x>>b>>y;
	string ans="";
	if (a==b)ans+="1";
	else ans+="0";
	string l=x.substr(0,2),r=y.substr(0,2);
	if (a==b&&l==r)ans+="1";
	else ans+="0";
	char p=x[2],q=y[2];
	if (p>q)swap(p,q);
	if (a==b&&l==r&&p=='D'&&q=='F')ans+="1";
	else if (a==b&&l==r&&check(p)&&check(q))ans+="1";
	else ans+="0";
	if (a==b&&l==r&&p=='D'&&q=='F')ans+="1";
	else if (a==b&&l==r&&((int)q-(int)p)==1&&check(p)&&check(q))ans+="1";
	else ans+="0";
	cout<<ans;
	return 0;
}
