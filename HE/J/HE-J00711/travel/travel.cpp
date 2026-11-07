#include<bits/stdc++.h>
using namespace std;
void check1(string a1,string b1,string a2,string b2){
	if (a1==a2)cout<<1;
	else cout<<0;
	if (a1==a2 && b1[0]==b2[0] && b1[1]==b2[1] )cout<<1;
	else cout<<0;
	if (a1==a2 && b1[0]==b2[0] && b1[1]==b2[1] && (b1[2]>='A' && b1[2]<='C' && b2[2]>='A' && b2[2]<='C' )||((b1[2]>='D' && b1[2]<='F' && b2[2]>='D' && b2[2]<='F' )))cout<<1;
	else cout<<0;
	if (a1==a2 && b1[0]==b2[0] && b1[1]==b2[1] && ((b1[2]>='A' && b1[2]<='C' && b2[2]>='A' && b2[2]<='C' && abs(b1[2]-b2[2])==1)||((b1[2]>='D' && b1[2]<='F' && b2[2]>='D' && b2[2]<='F'  && abs(b1[2]-b2[2])==1))))cout<<1;
	else cout<<0;
	return;
}
string s1,s2,c1,c2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>c1>>s2>>c2;
	check1(s1,c1,s2,c2);
	return 0;
} 
