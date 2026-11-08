/*travel*/
#include<bits/stdc++.h>
#define int long long
using namespace std;
string c1,s1,c2,s2,res="";
bool check(char s1,char s2){
	if(s1<='C' && s2<='C') return 1;
	else if(s1>'C' && s2>'C') return 1;
	else return 0;
}
signed main(){
	res="";
	cin.tie(nullptr)->sync_with_stdio(false);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) res+='1';
	else{
		puts("0000");
		return 0;
	}
	if(s1.substr(0,2)==s2.substr(0,2)) res+='1';
	else{
		puts("1000");
		return 0;
	}
	if(check(s1[2],s2[2])) res+='1';
	else{
		puts("1100");
		return 0;
	}
	if(abs(s1[2]-s2[2])==1) res+='1';
	else{
		puts("1110");
		return 0;
	}
	puts(res.c_str());
	return 0;
}
/*

*/
