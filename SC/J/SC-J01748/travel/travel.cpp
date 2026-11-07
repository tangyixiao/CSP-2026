#include<bits/stdc++.h>
using namespace std;
char s1[15],c1[15],s2[15],c2[15];
bool pd(char a,char b){
	if((int)a>(int)b) swap(a,b);
	if(a=='C') return 0;
	if(a=='D'&&b=='F') return 1;
	return (((int)b-(int)a)==1);
}
bool pd2(char a,char b){
	if(a>b) swap(a,b);
	if(b<='C') return 1;
	if(a>='D') return 1;
	return 0;
}
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
	cin>>c1>>s1>>c2>>s2;
	cout<<((c1[0]==c2[0])&&(c1[1]==c2[1]))
	<<((c1[0]==c2[0])&&(c1[1]==c2[1])&&(s1[0]==s2[0])&&(s1[1]==s2[1]))
	<<((c1[0]==c2[0])&&(c1[1]==c2[1])&&(s1[0]==s2[0])&&(s1[1]==s2[1])&&pd2(s2[2],s1[2]))
	<<((c1[0]==c2[0])&&(c1[1]==c2[1])&&(s1[0]==s2[0])&&(s1[1]==s2[1])&&pd(s2[2],s1[2]))
	; 
	return 0;
}