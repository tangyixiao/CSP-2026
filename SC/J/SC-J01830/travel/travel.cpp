#include <bits/stdc++.h>
using namespace std;
int Abs(int a){
	return max(a,-a);
}
bool help_if1(char c1,char c2){
	if (c1>='A'&&c1<='C')
		return c2>='A'&&c2<='C';
	return c2>='D'&&c2<='F';
}
bool help_if2(char c1,char c2){
	if (c1=='C')
		return c2=='B';
	if (c2=='C')
		return c1=='B';
	if (c1=='D')
		return c2=='F';
	if (c2=='D')
		return c1=='F';
	return Abs(c1-c2)==1;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s11,s2,s22;
	cin>>s1>>s11>>s2>>s22;
	char c1 = s11[2], c2 = s22[2];
	s11 = s11[0]+s11[1];s22 = s22[0]+s22[1];
	if (s1==s2)
		if (s11==s22)
			if (help_if1(c1,c2))
				if (help_if2(c1,c2))
					cout<<1111;
				else
					cout<<1110;
			else
				cout<<1100;
		else
			cout<<1000;
	else
		cout<<"0000";
	return 0;
} 