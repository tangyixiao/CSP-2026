#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
char st1,st2;
int eg(char ch){
	return ch>='A'&&ch<='C';
}
int check(char ch1,char ch2){
	if(ch1>ch2) swap(ch1,ch2);
	return ch1=='A'&&ch2=='C';
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	st1=s1[2],st2=s2[2];
	s1=s1.substr(0,2);
	s2=s2.substr(0,2);
	cout<<(c1==c2);
	cout<<(c1==c2&&s1==s2);
	cout<<(c1==c2&&s1==s2&&eg(st1)==eg(st2));
	cout<<(c1==c2&&s1==s2&&eg(st1)==eg(st2)&&!check(st1,st2));
	cout<<"\n";
	return 0;
} 
