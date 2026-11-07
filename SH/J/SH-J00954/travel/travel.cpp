#include <bits/stdc++.h>
using namespace std;

string ca,sa,cb,sb;

signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> ca >> sa >> cb >> sb;
	if(ca == cb) printf("1");
	else
	{
		printf("0000\n");
		return 0;
	}
	if(sa[0] == sb[0] && sa[1] == sb[1]) printf("1");
	else
	{
		printf("000\n");
		return 0;
	}
	if(sa[0] == sb[0] && sa[1] == sb[1] && ((sa[2] <= 'C' && sb[2] <= 'C') || (sa[2] > 'C' && sb[2] > 'C'))) printf("1");
	else
	{
		printf("00\n");
		return 0;
	}
	if(abs(sa[2]-sb[2]) == 1 || (sa[2] > 'C' && sb[2] > 'C')) printf("1\n");
	else printf("0\n");
	
	return 0;
}
/*
key:
Trick||Treat!
9:55
*/
