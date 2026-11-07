#include <iostream>
#include <cstdio>
using namespace std;
char a,b;
int c1,z1,c2,z2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	scanf("%d %d%c %d %d%c",&c1,&z1,&a,&c2,&z2,&b);
	cout << (c1==c2);
	cout << (c1==c2&&z1==z2);
	cout << (c1==c2&&z1==z2&&((a=='A'||a=='B'||a=='C')&&(b=='A'||b=='B'||b=='C') || (a=='D'||a=='F')&&(b=='D'||b=='F')));
	if(a>b)swap(a,b);
	cout << (c1==c2&&z1==z2&&b-a==1&&b!='D');
	return 0;
}
