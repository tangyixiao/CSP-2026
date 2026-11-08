#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,c;
	string b,d;
	cin>>a>>b>>c>>d;
	string b_x1;
	string b_x2;
	string d_x1;
	string d_x2;
	bool x0_flag;
	if(a==c)
	{
		cout<<1;
		x0_flag=true;
	}
	else
	{
		cout<<0;
		x0_flag=false;
	}
	b_x1=b[0];
	b_x2=b[1];
	d_x1=d[0];
	d_x2=d[1];
	bool x_flag=false;
	if(b_x1==d_x1&&b_x2==d_x2&&x0_flag)
	{
		cout<<1;
		x_flag=true;
	}
	else
	{
		cout<<0;
	}
	string b1;
	string d2;
	b1=b[2];
	d2=d[2];
	bool and_if;
	if(b1=="A"&&d2=="B"&&x_flag)
	{
		cout<<1;
		and_if=true;
	}
	else if(b1=="B"&&d2=="A"&&x_flag)
	{
		cout<<1;
		and_if=true;
	}
	else if(b1=="C"&&d2=="B"&&x_flag)
	{
		cout<<1;
		and_if=true;
	}
	else if(b1=="B"&&d2=="C"&&x_flag)
	{
		cout<<1;
		and_if=true;
	}
	else if(b1=="A"&&d2=="C"&&x_flag)
	{
		cout<<1;
		and_if=false;
	}
	else if(b1=="C"&&d2=="A"&&x_flag)
	{
		cout<<1;
		and_if=false;
	}
	else if(b1=="F"&&d2=="D"&&x_flag)
	{
		cout<<1;
		and_if=true;
	}
	else if(b1=="D"&&d2=="F"&&x_flag)
	{
		cout<<1;
		and_if=true;
	}
	else
	{
		cout<<0;
		and_if=false;
	}
	if(and_if)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
    }
	return 0;
}

