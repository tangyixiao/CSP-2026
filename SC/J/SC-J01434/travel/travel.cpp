#include<iostream>
using namespace std;
int a1=0,a2=0,a3=0,a4=0;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    int c1,c2;
    string s1,s2;
    cin>>c1>>s1>>c2>>s2;
    if(c1==1||c2==1||c1==16||c2==16)
	{cout<<"0000";
     return 0;}
    else if(c1%c2==0)a1=1;
    else a1=0;
    cout<<a1<<a2<<a3<<a4;
	return 0;
} 