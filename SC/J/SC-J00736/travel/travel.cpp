#include<bits/stdc++.h>
using namespace std;
#define endl '/n'
string c1,s1,c2,s2;
char x,y;
int a,b;
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int l=s1.size();
	if(c1==c2) cout<<'1';
	else{
		cout<<"0000";
		return 0;
	} 
	if(s1[0]==s2[0]&&s1[1]==s2[1]) cout<<'1';
	else{
		cout<<"000";
		return 0;
	}
	x=s1[l-1];
	y=s2[l-1];
	a=x-'A'+1;
	b=y-'A'+1;
	if((a+b<=5||a+b>=9)) cout<<'1';
	else{
		cout<<"00";
		return 0;
	}
	if(abs(a-b)==1) cout<<'1';
	else cout<<'0';
	return 0;
}