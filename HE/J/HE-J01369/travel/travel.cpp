#include<iostream>
using namespace std;
char s1[3],s2[3];
int c1,c2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	bool a=(c1==c2);
	bool b=(s1[0]==s2[0]&&s1[1]==s2[1]&&a);
	bool c=((s1[2]<='C'&&s2[2]<='C'||s1[2]>'C'&&s2[2]>'C')&&b);
	bool d=((s1[2]+1==s2[2]||s1[2]-1==s2[2])&&c);
	cout<<a<<b<<c<<d;
	return 0;
}
