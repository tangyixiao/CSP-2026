#include <iostream>
#include <string>
#include <cmath>
using namespace std;
const char c[3][5]={"?","ABC","DF?"};
string c1,s1,c2,s2;
char x1,x2;
int o,tw,th,fo;
int se(char x)
{
	for(int i=1;i<=2;i++)
		for(int j=0;j<4;j++)
			if(c[i][j]==x)
				return i;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	x1=s1[2],x2=s2[2];
	if(c1==c2)
		o=1;
	if(s1.substr(0,2)==s2.substr(0,2)&&o)
		tw=1;
	if(tw&&se(x1)==se(x2))
		th=1;
	if(th&&abs(x1-x2)==1)
		fo=1;
	cout<<o<<tw<<th<<fo;
	return 0;
}