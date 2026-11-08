#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool a=false,b=false,c=false,d=false;
	if(c1==c2) a=true;
	string t1=s1.substr(0,2),t2=s2.substr(0,2);
	if(t1==t2&&a) b=true;
	char x1=s1[2],x2=s2[2];
	if(((x1<='C'&&x2<='C')||(x1>='D'&&x2>='D'))&&a&&b) c=true;
	int x=x1-'A'+1,y=x2-'A'+1;
	if(abs(x-y)==1&&a&&b&&c) d=true;
	cout<<a<<" "<<b<<" "<<c<<" "<<d; 
	return 0;
}
