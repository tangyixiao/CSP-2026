#include<bits/stdc++.h>
using namespace std;
//小R的车厢号、座位号
string rc,rs;
//小X的车厢号、座位号
string xc,xs; 
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	//输入r,x的车票信息
	cin >> rc >> rs >> xc >> xs;
	//判断 两张车票对应的座位是否在同一节车厢
	if(rc == xc)
	{
		//是，输出1
		cout << 1;
		//两张车票对应的座位是否在同一节车厢的同一排 
		if(rs[0] == xs[0] && rs[1] == xs[1])
		{
			//是，输出1
			cout << 1; 
			//两张车票对应的座位是否在同一节车厢的同一排，且位于过道的同一侧
			if(rs[2] >= 'A' && rs[2] <= 'C')
			{
				if(xs[2] >= 'A' && xs[2] <= 'C') 
				{
					//在同一侧
					cout << 1;
					//判断是否相邻
					if(rs[2] + 1 == xs[2] || xs[2] + 1 == xs[2])
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
				if(xs[2] == 'D' || xs[2] == 'F')
				{
					cout << 1;
					//相邻
					cout << 1;	
				}
				else
				{
					cout << "00";
				}
			}
		}
		else
		{
			//否，输出000
			cout << "000"; 
		} 
	} 
	else if(rc != xc)
	{
		//不是，输出0000
		cout << "0000"; 
	}
	return 0;
	//保存时解注释 
} 
