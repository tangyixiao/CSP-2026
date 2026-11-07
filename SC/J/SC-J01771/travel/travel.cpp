#include <iostream>
using namespace std;
string c1,s1,c2,s2,pai1,pai2;
char wei1,wei2;
int a,b,c,d;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	pai1=s1.substr(0,2);
	pai2=s2.substr(0,2);
	wei1=s1[2];
	wei2=s2[2];
	if(wei1>wei2)
		swap(wei1,wei2);
	a=int(c1==c2);
	b=int(a&&pai1==pai2);
	if(wei1<'D'&&wei2<'D'||wei1>'C'&&wei2>'C')
		c=int(a&&b);
	if((char(int(wei1)+1)==wei2||wei1=='D'&&wei2=='F')&&c)
		d=int(a&&b);
	cout<<a<<b<<c<<d<<"\n";
	return 0;
}
/*
02 01A 02 01B
两张车票对应的座位是否在同一节车厢;
两张车票对应的座位是否在同一节车厢的同一排;
两张车票对应的座位是否在同一节车厢的同一排,且位于过道的同一侧;
两张车票对应的座位是否相邻。
*/