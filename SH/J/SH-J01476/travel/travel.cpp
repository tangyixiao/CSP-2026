/*? 两张车票对应的座位是否在同一节车厢；
? 两张车票对应的座位是否在同一节车厢的同一排；
? 两张车票对应的座位是否在同一节车厢的同一排，且位于过道的同一侧；
? 两张车票对应的座位是否相邻。

特殊性质A：两个座位在同一节车厢，即c1=c2。
特殊性质B：两个座位在同一排，即s1的前两位与s2的前两位相同。
特殊性质C：两个座位在过道的同一侧。
特殊性质D：小R的座位是D座，小X的座位是F座，即s1的末位字符是D，s2
的末位字符是F。 */
#include<bits/stdc++.h> 
using namespace std;

string c1,s1,c2,s2; 

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i = 0;i < 2;i++)
	{
		if(c1[i] != c2[i])
		{
			cout<<"0000";
			return 0;
		}
	}
	for(int i = 0;i < 2;i++)
	{
		if(s1[i] != s2[i])
		{
			cout<<"1000";
			return 0;
		}
	}
	if((s1[2] == 'A' && s2[2] == 'B') || (s1[2] == 'B' && s2[2] == 'A'))
	{
		cout<<"1111"; 
		return 0;
	}
	else if((s1[2] == 'C' && s2[2] == 'B') || (s1[2] == 'B' && s2[2] == 'C'))
	{
		cout<<"1111"; 
		return 0;
	}
	else if((s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F' && s2[2] == 'D'))
	{
		cout<<"1111"; 
		return 0;
	}
	else 
	{
		if((s1[2] == 'A' && s2[2] == 'C') || (s1[2] == 'C' && s2[2] == 'A'))
		{
			cout<<"1110"; 
			return 0;
		}
		else
		{
			cout<<"1100";
			return 0;
		}
	}
	return 0;
}
