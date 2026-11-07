#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string c1,s1,c2,s2;
bool tc() {
	char x=s1[2],y=s2[2];
	if (x-'A'>y-'A') swap(x,y);
	return (!((x=='A'||x=='B'||x=='C')&&(y=='D'||y=='F')));
}
bool xl() {
	char x=s1[2],y=s2[2];
	if (x-'A'>y-'A') swap(x,y);
	return ((y-'A')-(x-'A')==1);	
}
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	//1
	if (c1==c2) cout<<"1";
	else {cout<<"0000";return 0;}
	//2
	if (s1[0]==s2[0]&&s1[1]==s2[1]) cout<<"1";
	else {cout<<"000";return 0;}
	//3
	if (tc()) cout<<"1";
	else {cout<<"00";return 0;}
	//4
	if (xl()) cout<<"1";
	else cout<<"0";
	return 0;
} 
