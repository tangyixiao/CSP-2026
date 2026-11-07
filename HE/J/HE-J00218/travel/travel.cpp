#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r1,r2,x1,x2;int m1,m2,m3,m4;
	cin>>r1>>r2>>x1>>x2;
	if(r1==x1) m1=1;
	else {
		cout<<"0000";return 0;
	}
	if(r2[0]==x2[0]&&r2[1]==x2[1])
	{
		m2=1;
	}
	else{
		cout<<"1000";return 0;
	}
	if(r2[2]=='A'||r2[2]=='B'||r2[2]=='C')
	{
		if(x2[2]=='A'||x2[2]=='B'||x2[2]=='C')
		{
			m3=1;
		}
		else {
			cout<<"1100";return 0;
		}
	}
	if(r2[2]=='D'||r2[2]=='F')
	{
		if(x2[2]=='D'||x2[2]=='F')
		{
			m3=1;
		}
		else{
				cout<<"1100" ;return 0;
		}
	}
	if(r2[2]=='A'){
		if(x2[2]=='B') m4=1;
		else {
			cout<<"1110";return 0;
		}
	}
	if(r2[2]=='B'){
		if(x2[2]=='A'||x2[2]=='C') m4=1;
		else {
			cout<<"1110";return 0;
		}
	}
	if(r2[2]=='C'){
		if(x2[2]=='B') m4=1;
		else {
			cout<<"1110";return 0;
		}
	}
	if(r2[2]=='D')
	{
		if(x2[2]=='F') m4=1;
		else {
			cout<<"1110";return 0;
		}
	}
	if(r2[2]=='F')
	{
		if(x2[2]=='D') m4=1;
		else {
			cout<<"1110";return 0;
		}
	}
	cout<<m1<<m2<<m3<<m4;return 0;
	fclose(stdin);
	fclose(stdout);
}
