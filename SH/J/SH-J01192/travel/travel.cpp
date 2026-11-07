#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int (i)=(a);(i)<=(b);(i)++)
#define REP(i,a,b) for(int (i)=(a);(i)>=(b);(i)--)
typedef long long ll;

ll a,b;
char chaa,chab,chac,chba,chbb,chbc; 

signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%lld %c %c %c %lld %c %c %c",&a,&chaa,&chab,&chac,&b,&chba,&chbb,&chbc);
	if(a==b)
	{
		printf("1");
		if(chaa==chba&&chab==chbb)
		{
			printf("1");
			if((chac>='A'&&chac<='C'&&chbc>='A'&&chbc<='C')||((chac=='D'||chac=='F')&&(chbc=='D'||chbc=='F')))
			{
				printf("1");
				if(chac>chbc) swap(chac,chbc);
				if((chac=='A'&&chbc=='B')||(chac=='B'&&chbc=='C')||(chac=='D'&&chbc=='F')) printf("1\n");
				else printf("0\n"); 
			}
			else printf("00\n");
		}
		else printf("000\n");
	}
	else printf("0000\n");
	return 0;
}

// 100pts
