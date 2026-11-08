#include<bits/stdc++.h>
using namespace std;
string s1,s2,t1,t2;
bool check(char a,char b){
	int _1 = 0, _2 = 0;
	if(a == 'A' || a == 'B' || a == 'C') _1 = 1;
	else _1 = 2;
	if(b == 'A' || b == 'B' || b == 'C') _2 = 1;
	else _2 = 2;
	
	if(_1 == _2) return 1;
	else return 0;
}
bool f(char a,char b){
	if(a == 'A' && b == 'B' || a == 'B' && b == 'A') return 1;
	if(a == 'B' && b == 'C' || a == 'C' && b == 'B') return 1;
	if(a == 'D' && b == 'F' || a == 'F' && b == 'D') return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>t1>>t2;
	if(s1 == t1) cout<<1;
	else cout<<0;
	
	if(s2[0] == t2[0] && s2[1] == t2[1] && s1 == t1) cout<<1;
	else cout<<0;
	
	if(check(s2[2],t2[2]) && s2[0] == t2[0] && s2[1] == t2[1] && s1 == t1) cout<<1;
	else cout<<0;
	
	if(f(s2[2],t2[2]) && check(s2[2],t2[2]) && s2[0] == t2[0] && s2[1] == t2[1] && s1 == t1) cout<<1;
	else cout<<0;
	return 0;
}
/*
100pts
O(1)
596KB
*/
