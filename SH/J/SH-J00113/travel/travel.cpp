#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
bool flag=1;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel,out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1==c2)
		cout << 1;
	else
	{
		cout << 0;
		flag=0;
	}
	//q1	
	if(flag&&s1[0]==s2[0]&&s1[1]==s2[1])
		cout << 1;
	else
	{
		cout << 0;
		flag=0;
	}
	//q2
	if(flag&&(s1[2]<='C'&&s2[2]<='C'||s1[2]>='D'&&s2[2]>='D'))
		cout << 1;
	else
	{
		cout << 0;
		flag=0;
	}
	//q3
	
	if(flag&&abs(s1[2]-s2[2])==1)
		cout << 1;
	else
	{
		cout << 0;
		flag=0;
	}
	//q4
	return 0;
}
