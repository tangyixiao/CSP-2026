#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2)
	{
		cout<<"0000";
		return 0;
	}
	int x1=(s1[1]-'0')+(s1[0]-'0')*10,x2=(s2[1]-'0')+(s2[0]-'0')*10;
	if(x1!=x2)
	{
		cout<<"1000";
		return 0; 
	}
	int y1=s1[2]-'A'+1,y2=s2[2]-'A'+1;
	if(y1==6)y1--;
	if(y2==6)y2--;
	if((y1<=3 && y2>=4) || (y1>=4 && y2<=3))
	{
		cout<<"1100";
		return 0;
	}
	if(abs(y1-y2)>1)
	{
		cout<<"1110";
		return 0;
	}
	cout<<"1111";
	return 0;
}
