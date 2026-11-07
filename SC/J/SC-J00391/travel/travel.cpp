#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;}
	string row1=to_string(s1[0]+s1[1]),row2=to_string(s2[0]+s2[1]);
	if(row1!=row2){
		cout<<"1000";
		return 0;}
	if(!((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C'))){
		cout<<"1100";
		return 0;}
	char A=s1[2],B=s2[2];
	if(!((A=='A'&&B=='B')||(A=='B'&&B=='A')||(A=='B'&&B=='C')||(A=='C'&&B=='B')||(A=='D'&&B=='E')||(A=='E'&&B=='D'))){
		cout<<"1110";
		return 0;}
	cout<<"1111";
	return 0;}