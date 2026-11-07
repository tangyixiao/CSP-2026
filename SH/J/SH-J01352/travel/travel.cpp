#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
//	int cnum1,snum1,cnum2,snum2;
//	if(c1[0]=='0') cnum1=c1[1]-'0';
//	else cnum1=c1[1]-'0'+10;
//	if(c2[0]=='0') cnum2=c2[1]-'0';
//	else cnum2=c2[1]-'0'+10;
//	if(s1[0]=='0') snum1=s1[1]-'0';
//	else snum1=s1[1]-'0'+10;
//	if(s2[0]=='0') snum2=s2[1]-'0';
//	else snum2=s2[1]-'0'+10;
//	cout<<cnum1<<" "<<snum1<<" "<<cnum2<<" "<<snum2;
	if(c1==c2)
	{
		cout << 1;
		if(s1[0]==s2[0] && s1[1]==s2[1])
		{
			cout << 1;
//			cout << int(s1[2])-'A' << int(s2[2])-'A';
			if((int(s1[2])-'A'>=0 && int(s1[2])-'A'<=2 && int(s2[2])-'A'>=0 && int(s2[2])-'A'<=2) || ((s1[2]=='D' && s2[2]=='F') || (s1[2]=='F' && s2[2]=='D')))
			{
				cout << 1;
				if((s1[2]=='D' && s2[2]=='F') || (s1[2]=='F' && s2[2]=='D'))
				{
					cout << 1;
				}
				else if(int(s1[2])-'A'+1==int(s2[2])-'A' || int(s1[2])-'A'-1==int(s2[2])-'A')
				{
					cout << 1;
				}
				else
				{
					cout << 0;
				}
			}
			else
			{
				cout << "00";
			}
		}
		else
		{
			cout << "000";
		}
	}
	else
	{
		cout << "0000";
		return 0;
	}
    return 0;
}
// BABULABIBO
