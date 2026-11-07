#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	string rx,ry,xx,xy;
	cin>>rx>>ry>>xx>>xy;
	bool xsd=(rx==xx);
	cout<<xsd;
	bool xd=(ry.substr(0,2)==xy.substr(0,2));
	cout<<(xd&&xsd);
	int rs=ry[2]-'A',xs=xy[2]-'A';
	bool rxsd=!((rs>=0&&rs<=2)^(xs>=0&&xs<=2));
	cout<<(xsd&&xd&&rxsd);
	bool xld=(rs-xs==-1||rs-xs==1);
	cout<<(xsd&&xd&&rxsd&&xld);
}
