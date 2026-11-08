#include<bits/stdc++.h> 
using namespace std;
string c1,c2;
char s11,s12,s21,s22,s13,s23;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s11>>s12>>s13>>c2>>s21>>s22>>s23;
	s11-='0';
	s12-='0';
	s21-='0';
	s22-='0';
	if(c1==c2)
		cout<<1;
	else
		cout<<0;
	if(s11==s21&&s12==s22&&s13==s23){
		cout<<"000";
		return 0;
	}
	if(s11==s21&&s12==s22)
		cout<<1;
	else
		cout<<0;
	if((s11==s21&&s12==s22)&&((s13<='C'&&s23<='C')||(s13>'C'&&s23>'C')))
		cout<<1;
	else
		cout<<0;
	if((s11==s21&&s12==s22)&&((s13<='C'&&s23<='C')||(s13>'C'&&s23>'C'))&&(max(s13,s23)-min(s13,s23)==1))
		cout<<1;
	else
		cout<<0;
	return 0;
}
