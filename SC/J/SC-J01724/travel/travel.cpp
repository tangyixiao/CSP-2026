#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2)//判断是否在同一节车厢 
	{
		cout<<"0000";
		return 0;
	}
	cout<<1;
	if(s1.at(0)!=s2.at(0) || s1.at(1)!=s2.at(1))//判断是否在同一排 
	{
		cout<<"000";
		return 0;
	}
	cout<<1;
	//判断是否位于过道的同一侧和是否相邻 
	char r=s1.at(2),x=s2.at(2); 
	if(r<=67 && x<=67)
	{
		cout<<1;
		if(abs(r-x)==1) cout<<1; //判断是否相邻 
		else cout<<0;
	}
	else if(r>67 && x>67) cout<<11;
	else cout<<"00";
	
	return 0;
}