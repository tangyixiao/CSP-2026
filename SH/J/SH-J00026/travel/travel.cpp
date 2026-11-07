#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool lf1,lf2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1!=c2)
	{
		cout << "0000" << "\n";
		return 0;
	}
	cout << "1";
	for(int l=0;l<=1;l++)
	{
		if(s1[l]!=s2[l])
		{
			cout << "000" << "\n";
			return 0;
		}
	}
	cout << "1";
	if(s1[2]=='D'||s1[2]=='F')
	{
		lf1=1;
	}
	if(s2[2]=='D'||s2[2]=='F')
	{
		lf2=1;
	}
	if(lf1!=lf2)
	{
		cout << "00" << "\n";
		return 0;
	}
	cout << "1";
	if(s1[2]==s2[2]+1||s1[2]==s2[2]-1)
	{
		cout << "1" << "\n";
		return 0;
	}
	cout << "0" << "\n";
	return 0;	
}
