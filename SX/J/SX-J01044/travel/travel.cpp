#include <bits/stdc++.h>
using namespace std;
#define int long long//注意数据范围
#define fr(i,a,b) for(int i=a;i<=b;i++)
int c[5],s[5];
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	bool flag1=0,flag2=0,flag3=0;
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	//是否在同一节车厢
	if(a!=c)
	{
		flag1=1;
		cout <<0;
	}
	else
		cout <<1;


	//是否在同一排
	string r1=b.substr(0,2);
	string r2=d.substr(0,2);
	if(flag1 || r1!=r2)
	{
		flag2=1;
		cout <<0;
	}
	else
		cout <<1;


	//是否在同一侧
	string s1=b.substr(2,1);
	string s2=d.substr(2,1);
	bool t=0;
	if((s1=="A"&&s2=="B")||(s1=="A"&&s2=="C")||(s1=="B"&&s2=="C")||(s1=="B"&&s2=="A")||(s1=="C"&&s2=="A")||(s1=="C"&&s2=="B")||(s1=="D"&&s2=="F")||(s1=="F"&&s2=="D"))
		t=1;
	if(flag1 || flag2 || !t)
	{
		flag3=1;
		cout <<0;
	}
	else
		cout <<1;


	//是否相邻
	bool k=0;
	if((s1=="A"&&s2=="B")||(s1=="B"&&s2=="C")||(s1=="B"&&s2=="A")||(s1=="C"&&s2=="B")||(s1=="D"&&s2=="F")||(s1=="F"&&s2=="D"))
		k=1;
	if(flag1 || flag2 || flag3 || !k)
		cout <<0;
	else
		cout <<1;

	return 0;
}
//rp++