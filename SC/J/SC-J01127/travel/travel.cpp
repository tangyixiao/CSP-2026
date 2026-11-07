#include<bits/stdc++.h>
using namespace std;
string A;
int a,b,c,a1,b1,c1;//1车厢号、1座位号、1座位列号, 2车厢号、2座位号、2座位列号
int z=1;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    cin>>A;
	a=(A[1]-'0')+10*(A[0]-'0');
	cin>>A;
	b=(A[1]-'0')+10*(A[0]-'0');
	c=A[2]-'A'+1;
	
    cin>>A;
	a1=(A[1]-'0')+10*(A[0]-'0');
	cin>>A;
	b1=(A[1]-'0')+10*(A[0]-'0');
	c1=A[2]-'A'+1;
	
	if(c>3)
	{
		c++;
	}
	if(c1>3)
	{
		c1++;
	}
	
	//cout<<a<<" "<<b<<" "<<c<<" "<<a1<<" "<<b1<<" "<<c1;
	if(a!=a1)
	{
		cout<<"0000";
		return 0;
	}
	if(b!=b1)
	{
		cout<<"1000";
		return 0;
	}
	if(min(c,c1)<=3&&max(c,c1)>3)
	{
		cout<<"1100";
		return 0;
	}
	if(max(c,c1)-min(c,c1)!=1)
	{
		cout<<"1110";
		return 0;
	}
	cout<<"1111";
	return 0;
	/*输出:	 1.两张车票对应的座位是否在同一节车厢；
	2.两张车票对应的座位是否在同一节车厢的同一排；
	3.两张车票对应的座位是否在同一节车厢的同一排，
且位于过道的同一侧；
	4.两张车票对应的座位是否相邻*/
}