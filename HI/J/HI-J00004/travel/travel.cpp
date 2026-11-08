#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
bool check(string s){
	if(s[2]>='D'&&s[2]<='F') return true;
	else return false;
}
bool check2(char x,char y){
	if(x=='D'&&y=='F') return true;
	if(x=='F'&&y=='D') return true;
	if(x=='A'&&y=='B') return true;
	if(x=='B'&&y=='A') return true;
	if(x=='B'&&y=='C') return true;
	if(x=='C'&&y=='B') return true;
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			if(check(s1)==check(s2)){
				cout<<1;
				if(check2(s1[2],s2[2])) cout<<1;
				else cout<<0;
			}
			else cout<<0<<0;
		}
		else cout<<0<<0<<0;
	}
	else cout<<0<<0<<0<<0;
	return 0;
}
