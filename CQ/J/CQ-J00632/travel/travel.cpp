#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	ifstream in("travel.in");
	ofstream out("travel.out");
	string c1,s1,c2,s2;
	in>>c1>>s1>>c2>>s2;
	bool a=(c1==c2),b,c,d;
	b=a&&(s1[0]==s2[0])&&(s1[1]==s2[1]);
	c=b&&(((s1[2]<='C')&&(s2[2]<='C'))||((s1[2]>'C')&&(s2[2]>'C')));
	int l=(int)s1[2]-(int)s2[2];
	d=c&&((l==1||l==-1)||(s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D'));
	out<<a<<b<<c<<d;
	return 0;
} 
