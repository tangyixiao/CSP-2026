#include<bits/stdc++.h>
using namespace std;
string s1,t1,s2,t2;
int yly(char s){
	if(s=='A'||s=='B'||s=='C') return 1;
	else return 2;
}
int zzs(char s,char t){
	int x=s-'A',y=t-'A';
	if(abs(x-y)==1) return 1;
	else return 0;
}
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>t1>>s2>>t2;
	if(s1!=s2) cout<<"0000";
	else if(t1[0]!=t2[0]||t1[1]!=t2[1]) cout<<"1000";
	else if(yly(t1[2])!=yly(t2[2])) cout<<"1100";
	else if(!zzs(t1[2],t2[2])) cout<<"1110";
	else cout<<"1111";
	return 0;
}
