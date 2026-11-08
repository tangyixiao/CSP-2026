#include<bits/stdc++.h>
using namespace std;
string s1,s2,a,b;
bool f(string x)
{
	if(x[2]>='A' && x[2]<='C') return 1;
	else return 0;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>a>>s1>>b>>s2;
	if(a==b) cout<<1;
	else {
		cout<<"0000";
		return 0;
	}
	string x,y;
	x=s1[0]+s1[1];
	y=s2[0]+s2[1];
	if(x==y) cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	if(f(s1)==f(s2)) cout<<1;
	else {
		cout<<"00";
		return 0;
	}
	if(f(s1)==1 && (s1[2]=='A' && s2[2]=='C') || (s1[2]=='C' && s2[2]=='A')) cout<<0;
	else cout<<1;
	return 0;
} 
