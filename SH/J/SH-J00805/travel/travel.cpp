#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<set>
#include<map>
#include<cstdio>
#include<cmath>
#include<cctype>
using namespace std;
//// 
/// 全局变量/函数区

//// 
/// 主函数区 
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a1,a2,b1,b2;
	char a3,b3;
	scanf("%d %d%c %d %d%c",&a1,&a2,&a3,&b1,&b2,&b3);
	if (a1!=b1)printf("0000\n");
	else if (a2!=b2)printf("1000\n");
	else if (max(a3,b3)>'C'&&min(a3,b3)<'D')printf("1100\n");
	else if ((max(a3,b3)=='B'&&min(a3,b3)=='A')||(max(a3,b3)=='C'&&min(a3,b3)=='B')||(max(a3,b3)=='F'&&min(a3,b3)=='D'))
	printf("1111\n");
	else printf("1110\n");
	return 0; 
}
