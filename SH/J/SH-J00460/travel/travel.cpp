#include <bits/stdc++.h>
using namespace std;
bool f(char c){
	if(c=='A'||c=='B'||c=='C') return true;
	else if(c=='D'||c=='F') return false;
}
bool g(char a,char b){
	if(a>b) swap(a,b);
	if(a==b) return false;
	if(a=='D'&&b=='F'||a=='A'&&b=='B'||a=='B'&&b=='C') return true;
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1;
	string c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool one=(c1==c2);
	bool two=(one&&(s1[0]==s2[0])&&(s1[1]==s2[1]));
	bool three=(two&&(f(s1[2])==f(s2[2])));
	bool four=(three&&g(s1[2],s2[2]));
	cout<<one<<two<<three<<four<<"\n";
	return 0;
}
