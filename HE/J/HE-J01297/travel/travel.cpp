#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	string f,h;
	cin>>a>>b>>c>>d;
	f=b.substr(2,1);
	h=d.substr(2,1);
	int e=0,i=0,g=0;
	if(a==c)cout<<"1";
	else cout<<"0";
	if(b.substr(1,1)==d.substr(1,1))cout<<"1";
	else cout<<"0";
	if(b[2]-16>3&&d[2]-16>3) cout<<"1";
	else if(b[2]-16<=3&&d[2]-16<=3) cout<<"1";
		 else cout<<"0";
	if(b[2]-16+1==d[2]-16||b[2]-16-1==d[2]-16) cout<<"1";
	else cout<<"0";
	fclose(stdin);
	fclose(stdout);
	return 0;
 } 
